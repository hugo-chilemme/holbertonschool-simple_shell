# Hsh Simple Shell

## Synopsis ⚡️
This is the repository for our project for [Holberton School](https://www.holbertonschool.fr/) low-level programming curriculum. The project consisted in coding `hsh`, a simplified version of `sh` Bourne Shell. The project was realized in two weeks based on a flow chart and using Trello planning.

## Overview :computer: 
`hsh` is a custom UNIX command line interpreter, built entirely in **C** language. It works by receiving commands given by the user input. 

## Built With :hammer_and_wrench:

`hsh` was developped with:

* C programming language
* Vi and Vim
* Program was developed on an environment using Docker
* GCC

## Features

`hsh` supports two modes: `interactive`and `non-interactive`.

### Interactive

### Non interactive

In non interactive mode, you can pipe commands.

## Built-Ins ⚙️

The following built-ins functions have been implemented:

### Exit

The `exit` command input exits `hsh`.

```
$ ./hsh
$ exit
```

### Env

The `env` command input prints the current environment:

```
$ env
LANGUAGE=en_US:en
PWD=/holbertonschool-simple_shell
```

## Usage 📖

* First, Git clone the repository using: 

    **HTTPS:**
```
git clone https://github.com/HugoCLI/holbertonschool-simple_shell.git
```
   **SSH:** 
```
git clone git@github.com:HugoCLI/holbertonschool-simple_shell.git
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
man ./
```


## Examples

Below are presented examples of `hsh` usage.

### Interactive

**Command**

**Output**

### Non interactive

**Command**

**Output**

## Process description


## Manual Page

[Manpage]( )


## Libraries used


## Project Files Description

The projects include x files as follows: 


| File | Description                                     |
|----------|-----------------------------------------------|
|  main.c     |  Entry point          |
|  main.h     |  Header files, containing all functions prototypes as well as the structures and librairies used |
|   assembly_command.c   |        |
|   env_command.c    |       |
|   execute_command.c     |             |
|     input_command.c  |   |
|    is_path.c   |   |
|    path_command.c   |   |

## Flow Chart

## Acknowledgment 🙏

Thanks to [Taieb](https://github.com/taiebchaabini) for reviewing our project !

## Authors ✒️

**Hugo**
[@]( )

**Camille**
[@]( )

**Sonia Nguyen**
[@soniangn](https://github.com/soniangn)
