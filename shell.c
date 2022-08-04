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
	char *CONCAT, *DIRE;

	(void)ac;
	(void)av;

	while (1)
	{
		if (isatty(0))
			printf("$");

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
			PATH = get_path(env);
			DIRE = getDir(PATH, str);
			CONCAT = concat_str_dir(DIRE, str[0]);	

			child_pid = fork();
			if (child_pid != 0)
			{
				wait(&status);
				free(str);
			}
			else
			{
				execve(CONCAT, str, env);
				return (0);
			}
		}
	}
	free(str);
	free(lineptr);
	return (0);
}
