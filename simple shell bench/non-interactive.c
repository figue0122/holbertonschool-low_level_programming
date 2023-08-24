#include <stdio.h>
#include <stdlib.h>
#include "simple.h"

int main(int argc, char **argv, char **env) {
    // ... (rest of the main function remains the same)

    // Example of using the non-interactive function
    const char *command = "ls -l";
    int command_status = execute_command(command);
    printf("Command exited with status: %d\n", command_status);

    return 0;
}

int execute_command(const char *command) {
    char *line = strdup(command); // Duplicate the command string
    char **args = tokenize(line);

    if (args[0] != NULL) {
        int status = execute(args);
        free_array(args);
        free(line); // Free the duplicated command string
        return status;
    }

    free(line); // Free the duplicated command string
    return -1;
}

