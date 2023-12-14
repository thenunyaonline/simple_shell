#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"
extern char **environ;

char *legilimens_line(void);
char **tokenizar(char *line);
void freearray2D(char **arr);
int _execute(char **command, char **argv, int idx);
int main(int agc, char **argv);
char *_getenv(char *var);
char * _handlepath(char *command);

int _strlen(char *str);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

void print_error(char *name,char *cmd, int idx);
char *_itoa(int n);
void reverse_string(char *str, int len);

#endif
