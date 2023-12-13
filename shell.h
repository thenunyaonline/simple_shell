#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


void eg_prints(const char *info);
int _strlen(char *str);
int main(void);
void aparecium_display(void);
void execs_com(const char *instruct);
void legilimens_com(char *instruct, size_t size);
void token_com(const char *instruct);

#endif
