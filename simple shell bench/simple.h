#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <dirent.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdbool.h>

char *read_input();
char **tokenize(char *line);
void free_array(char **args);
int execute(char **args);
void execute_command(char *command, char environment);
void prompt(void);
char *read_input(void);
char **tokenize(char *line);
void free_array(char **array);
int main(int argc, char argv, char *env);
void handle_non_interactive_mode(char *environment);
void free_array(char **array);
char get_paths(void);

#endif