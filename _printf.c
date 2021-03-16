#include "holberton.h"
/**
 *_printf- function that acts like printf
 *@format: format
 *Return: return 1 or -1 and l
 */
int _printf(const char *format, ...)
{
	va_list va;
	int i, j, l = 0;
s_t func[] = {
{"c", print_char},
{"s", print_string},
{"i", _print_i},
{"d", _print_i},
{NULL, NULL},
};
if (format == NULL)
return (-1);
va_start(va, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1);
if (format[i] == '%')
{
_putchar(format[i]);
l++;
}
for (j = 0; (func + j)->c != NULL; j++)
{
if (format[i] == *(func + j)->c)
l += (func + j)->f(va);
}
}
else
{
_putchar(format[i]);
l++;
}
}
va_end(va);
return (l);
}
