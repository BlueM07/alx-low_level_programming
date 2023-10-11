#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(int c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));

#endif /* MAIN_H */
