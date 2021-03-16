#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
*_print_i - prints an integer
*@vi: the list of arguments
* Return: number of printed characters
*/
int _print_i(va_list vi)
{
int x, bit, d, o, n, c = 0;
n = va_arg(vi, int);
o = n % 10;
n = n / 10;
if (o < 0)
{
n = -n;
o = -o;
_putchar('-');
c++;
}
bit = n;
d = 1;
if (bit > 0)
{
while ((bit / 10) != 0)
{
bit = bit / 10;
d = d * 10;
}
while (d >= 1)
{
x = n / d;
_putchar(x + '0');
c++;
n = n % d;
d = d / 10;
}
}
_putchar(o + '0');
c++;
return (c);
}
/**
* print_u - Convert a number into an unsigned int and print it
* @un: The number to be converted
*
* Return: The number of digits printed
*/
int print_u(va_list un)
{
unsigned int num, c = 0, div;

num = va_arg(un, int);

if (num == 0)
{
_putchar('0');
c = 1;
}
if (num > 0)
{
for (div = 1; (num / div) > 9; div *= 10)
;
while (div != 0)
{
_putchar((num / div) + '0');
num %= div;
div /= 10;
c++;
}
}
return (c);
}
