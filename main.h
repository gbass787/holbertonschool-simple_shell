#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void free_fun(char **PATH);
char **split_line(char *lineptr);
char *concat_str_dir(char *array, char *command);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
int _strcmp(char *s1, char *s2);
void _print_int(int number);
int _putchar(char c);
char *getDir(char **path, char **command);
char **get_path(char **env);
char *_strdup(char *str);
int _putchar(char c);
int get_env(char *envp[]);

#endif
