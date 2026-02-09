#ifndef PARSER_H
#define PARSER_H

typedef struct {
    char **args;
    int count;
} Command;

Command parse_command(const char *input);
void free_command(Command *cmd);

#endif