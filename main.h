#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
int exec_ute(char **cmd, char **av);
 extern char **environ;
#define DELIM " \t\n"
char **tknzer(char *line);
char *get_line();
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_str_arr(char **arr);
int exec_ute(char **cmd, char **av);


#endif
