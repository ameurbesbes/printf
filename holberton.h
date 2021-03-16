#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>

/**
 *struct specifiers- struct
 *@c: charac
 *@f: function needed
 */
typedef struct s
{
char *c;
int (*f)(va_list va);
} s_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list argslist);
int print_string(va_list argslist);
int _print_i(va_list vi);
int print_u(va_list un);
int print_oct(va_list oct);
int print_c(va_list c);
int print_s(va_list s);
int print_rot(va_list ro);
int print_rs(va_list rs);
#endif
