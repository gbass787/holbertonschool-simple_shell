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

You will now be inside of your shell.

## PATH:

A colon-separated list of directories in which the shell looks for commands. A null directory name in the path (represented by any of two adjacent colons, an initial colon, or a trailing colon) indicates the current directory.

## Command Execution:

After receiving a command, **hsh** tokenizes it into words using `" "` as a delimiter. The first word is considered the command and all remaining words are considered arguments to that command. **hsh** then proceeds with the following actions:
1. If the first character of the command is neither a slash (`\`) nor dot (`.`), the shell searches for it in the list of shell builtins. If there exists a builtin by that name, the builtin is invoked.
2. If the first character of the command is none of a slash (`\`), dot (`.`), nor builtin, **hsh** searches each element of the **PATH** environmental variable for a directory containing an executable file by that name.
3. If the first character of the command is a slash (`\`) or dot (`.`) or either of the above searches was successful, the shell executes the named program with any remaining given arguments in a separate execution environment.

## Exit Status:

**hsh** returns the exit status of the last command executed, with zero indicating success and non-zero indicating failure.

If a command is not found, the return status is `127`; if a command is found but is not executable, the return status is 126.

All builtins return zero on success and one or two on incorrect usage (indicated by a corresponding error message).

