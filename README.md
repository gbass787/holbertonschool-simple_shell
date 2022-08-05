<h1 align="center"> simple_shell project </h1>

## Description:

In the simple_shell, holberton project we will code our own simple shell. It must have the same behavior than **sh** shell in output and error. We had to learn about the workflow of a command line interpreter, what's a pid and ppid, learn about manage processes, how to manipulate the environment of the current process, the difference between a function and system call, how to create processes, how to get PATH variables, execute commands with execve. And off course be carefull with memory leaks and write beautiful code with Betty style.

## Compilation:

The program is compiled with the following command:
`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

## Usage:

The way to use it in interactive mode is to type the command:
`./hsh`.

This will display another shell prompt beginning with `($)`

You will now be inside of our simple shell.

## PATH:

A colon-separated list of directories in which the shell looks for commands. A null directory name in the path (represented by any of two adjacent colons, an initial colon, or a trailing colon) indicates the current directory.

## Command Execution:

After receiving a command, the shell tokenizes it into words using `" "` as a delimiter. The first word is considered the command and all remaining words are considered arguments to that command. **hsh** then proceeds with the following actions:
1. If the first character of the command is neither of the delimiters, the shell searches for it in the list of shell builtins. If there exists a builtin by that name, the builtin is invoked.
2. If the first character of the command is none of the delimiters, nor builtin, it searches each element of the **PATH** environmental variable for a directory containing an executable file by that name.
3. If the first character of the command is a delimiter or either of the above searches was successful, it will display error and the prompt.

## Return

The simple shell returns 0 when sucsess.

## Examples

Getting the promt and typing commands:

```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./shs
```
```sh
#$ ls
AUTHORS    calloc.c	  delete_memory.c  getenv.c  main.c		 read_line.c  split_line.c  strcmp.c  strlen.c
README.md  create_node.c  execute.c	      header.h  man_1_simple_shell  shs	            strcat.c	          strcpy.c
#$
```


And #$ run a command in non-interactive mode, doing:
```sh
$ echo "echo 'what the shell?'" | ./hsh
'what the shell?'
$
```

## FLOWCHART:

![Shell_Flow](https://user-images.githubusercontent.com/105442451/182874614-fd7a33f1-1274-47d6-a8ec-b75b7ba0c542.png)

### Authors

Sara Cruz
email: 5012@holbertonschool.com
Gerardo Bassat
email: 4551@holbertonschool.com
