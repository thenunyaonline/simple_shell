#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int _strlen(char *str);
int main(void);
void _strtok(const char *str, char delimeter);

#endif
