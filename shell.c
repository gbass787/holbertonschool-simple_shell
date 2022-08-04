#include "main.h"
/**
 * main - simple shell
 * @ac: counter
 * @av: arguments
 * @env: enviorment
 * Return: 1
 */
int main(int ac, char **av, char **env)
{
	char *lineptr = NULL;
	size_t n = 0;
	char **str;
	pid_t child_pid;
	int status;
	char **PATH;
	char *DIRE, *CONCAT;
	struct stat buf;

	(void)ac;
	(void)av;

	while (1)
	{
		if (isatty(0))
			printf("$ ");

		if (getline(&lineptr, &n, stdin) == -1)
			break;

		if (_strcmp(lineptr, "exit\n") == 0)
		{
			free(lineptr);
			exit(0);
		}
		str = split_line(lineptr);
	
		if (str[0] != NULL)
		{
			if (stat(str[0], &buf) == -1)
			{ 	
				PATH = get_path(env);
				DIRE = getDir(PATH, str);
				if (DIRE != NULL)
					CONCAT = concat_str_dir(DIRE, str[0]);	
			}
			else
				CONCAT = str[0];	

			child_pid = fork();
			if (child_pid != 0)
			{
				wait(&status);
				free(str);
			}
			else
			{
				if(execve(CONCAT, str, env))
				{
					if (stat(str[0], &buf) == -1)
						free_fun(PATH);
					perror("execve");
					exit(EXIT_FAILURE);
				}
			}
		}
			free_fun(PATH);
	}
	free(str);
	free(lineptr);
	return (0);
}
