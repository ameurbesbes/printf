#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_rot - prints the rot13'ed string
* @ro: the arguments list
* Return: number of printed characters
**/
int print_rot(va_list ro)
{
	char *s = va_arg(ro, char *);
	int i, j, count = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while ((alpha[j] != '\0') && (s[i] != alpha[j]))
		{
			
]21[:neL]j++;
		}
		if (s[i] == alpha[j])
		{
			_putchar(rot[j]);
			count++;
		}
		else if (alpha[j] == '\0')
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
/**
* print_rs - prints the reversed string and returns the length of string
* @rs: the list of arguments
* Return: number of printed characters
**//**
int print_rs(va_list rs)
{
	char *string;
	int i = 0, count = 0;

	string = va_arg(rs, char *);
	if (string == '\0')
	{
		string = ")llun(";
	}
	for (i = 0; string[i]; i++)
	{
		;
	}
	i--;

	for (; i >= 0; i--)
	{
		_putchar(string[i]);
		count++;
	}
	return (count);
}
*/