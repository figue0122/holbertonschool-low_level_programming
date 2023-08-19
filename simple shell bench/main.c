int main(int argc, char **argv, char **env) {
    (void)argc;
    (void)argv;

    char *line;
    int status;
    bool running = true;

    while (running) {
        printf("$ ");
        line = read_input();

        if (line == NULL) {
            break;
        }

        if (strcmp(line, "exit\n") == 0) {
            running = false;
        } else {
            status = execute_command(line);
        }

        free(line);

        if (status == -1) {
            running = false;
        }
    }

    return 0;
}
