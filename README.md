# Hsh Simple Shell
  
## Synopsis ⚡️
This is the repository for our project for [Holberton School](https://www.holbertonschool.fr/) low-level programming curriculum. The project consisted in coding `hsh`, a simplified and custom version of `sh` Bourne Shell. The project was realized in two weeks based on a flow chart and using Trello planning.

## Overview :computer: 
`hsh` is a custom UNIX command line interpreter, built entirely in **C** language. It executes commands read from the standard input.
The memory management and the errors output have been handled.
  
## Built With :hammer_and_wrench: 
  
`hsh` was developped with: 
 
* C programming language
* Visual Studio Code
* Program was developed on an environment using Docker
* GCC
 
## Features 

`hsh` supports two modes: `interactive`and `non-interactive`. It handles the command lines with arguments and pathways.

## Built-Ins ⚙️

The following built-ins functions have been implemented:

### Exit

* Usage: `exit`
* Quits `hsh`

```
$ ./hsh
$ exit
```
 
### Env

* Usage: `env`
* Prints the current environment

```
$ env
LANGUAGE=en_US:en
PWD=/holbertonschool-simple_shell
``` 

## Usage 📖

* First, Git clone the repository using: 

    **HTTPS:**
```
$ git clone https://github.com/HugoCLI/holbertonschool-simple_shell.git
```
   **SSH:** 
```
$ git clone git@github.com:HugoCLI/holbertonschool-simple_shell.git
```

* Then, compile the files this way

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

* You're ready to run the program with `./hsh`
A prompt will be displayed `$`, awaiting for a command input. 

* Exit

To exit the program, run `$ exit` or use CTRL + D.

* Manual

`hsh` is provided with a manpage that is accessible by running:
```
man ./man_shell.1
```

## Examples

Below are presented examples of `hsh` usage.

### Interactive

In interactive mode, `hsh` receives directly the command from the user: standard input linked to the terminal and detected by the [isatty(3)](https://www.man7.org/linux/man-pages/man3/isatty.3.html) function.

**Command**

```
$ ls -la
$ echo 'Holberton school'
$ pwd
```

**Output**

```
total 92
drwxr-xr-x 4 root root  4096 Dec  7 14:01 .
drwxr-xr-x 1 root root  4096 Dec  5 06:23 ..
-rw-r--r-- 1 root root   344 Dec  7 09:13 assembly_command.c
-rw-r--r-- 1 root root   186 Dec  7 09:13 AUTHORS
-rw-r--r-- 1 root root   225 Dec  7 09:13 env_command.c
-rw-r--r-- 1 root root   554 Dec  7 09:13 execute_command.c
'Holberton school'
/holbertonschool-simple_shell
```

### Non interactive

In non interactive mode, the commands are read according to the piped commands.

**Command**

```
echo "/bin/ls" | ./hsh
```
**Output**

```
assembly_command.c  execute_command.c             hsh              main.c          README.md              start_val.sh
AUTHORS             exercices                     input_command.c  main.h          requirement_command.c
env_command.c       holbertonschool-simple_shell  is_path.c        path_command.c  start.sh
```

## Exit status 👋

| Exit | Description                                     |
|----------|-----------------------------------------------|
|  0     |  Success |
|  -1     |  Failure |
|   127   |  Command not found      |

## Signal 📢

The keyboard command CTRL + C is ignored:

```
$ ^C
$ ^C
$
```

## Manual Page

[Manpage](https://github.com/HugoCLI/holbertonschool-simple_shell/blob/main/man_shell.1) 

## Libraries used 📔

`stdlib.h` | `stdio.h` | `unistd.h` | `string.h` | `sys/types.h` | `sys/wait.h` | `sys/stat.h` 

## Project Files Description 📌

The projects include 8 files as follows: 

| File | Description                                     |
|----------|-----------------------------------------------|
|  main.c     |  Entry point that displays a prompt, checks if user entered `exit` or CTRL+D and reads user input |
|  main.h     |  Header files, containing all functions prototypes as well as the librairies used |
|   assembly_command.c   |   Assembles the command     |
|   env_command.c    |   Prints the current environment    |
|   execute_command.c     |     Creates a child process and execute the command   |
|     input_command.c  | Tokenises the input received  |
|    is_path.c   | Checks if there is a '/' in the command |
|    path_command.c   |  Finds the path to execute the command |

## Flow Chart 📄

![flowchart](https://github.com/HugoCLI/holbertonschool-simple_shell/blob/main/Simple%20Shell-Page-1.drawio.png)

## Acknowledgment 🙏

Thanks to [Taieb](https://github.com/taiebchaabini) for reviewing our project !

## Authors ✒️

**Hugo Chilemme**
[@HugoCLI](https://github.com/HugoCLI)

**Camille Favriel**
[@CamilleFavriel](https://github.com/CamilleFavriel)

**Sonia Nguyen**
[@soniangn](https://github.com/soniangn)
