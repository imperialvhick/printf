#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...);
int _string(char *str);
int _number(int num);
void support(char *format, int *num, int *i);
#endif
