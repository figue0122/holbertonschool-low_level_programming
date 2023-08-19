#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_LINE_LENGTH 1024
#define MAX_ARGS 64

// Function to read input from the user
char *read_input() {
    char *line = NULL;
    size_t bufsize = 0;
    getline(&line, &bufsize, stdin);
    return line;
}

// Function to tokenize the input line into arguments
char **tokenize(char *line) {
    char **args = (char **)malloc(MAX_ARGS * sizeof(char *));
    if (!args) {
        perror("malloc error");
        exit(EXIT_FAILURE);
    }

    char *token = strtok(line, " \t\n");
    int i = 0;
    while (token != NULL) {
        args[i] = token;
        i++;
        token = strtok(NULL, " \t\n");
    }
    args[i] = NULL;

    return args;
}

// Function to free the memory used by the argument array
void free_array(char **args) {
    free(args);
}

// Function to execute the command with arguments
int execute(char **args) {
    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        if (execvp(args[0], args) == -1) {
            perror("execvp error");
            exit(EXIT_FAILURE);
        }
    } else if (pid > 0) {
        // Parent process
        int status;
        waitpid(pid, &status, 0);
        return WIFEXITED(status) ? WEXITSTATUS(status) : -1;
    } else {
        perror("fork error");
        exit(EXIT_FAILURE);
    }

    return 0;
}
