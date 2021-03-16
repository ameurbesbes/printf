# printf

# Synopsis

This is a simple implementation of printf function that formats and prints data
Description

The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

# The available convertion specifiers are:

    * %c: Prints a single character.
    * %s: Prints a string of characters.
    * %d: Prints integers.
    * %i: Prints integers.
    * %b: Prints the binary representation of an unsigned decimal.
    * %u: Prints unsigned integers
    * %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
    * %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
    * %r: Prints a reversed string
    * %R: Prints the Rot13 interpretation of a string

# Usage

    All the files are to be compiled on Ubuntu 14.04 LTS
    Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
    Include the "holberton.h" header file on the functions using the _printf()

## Example:
* main.c
```
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	return (0);
}
```
* terminal
``` 
ameur@ameur-Inspiron-15-3567:~/printf$  gcc -Wall -Werror -Wextra -pedantic *.c
ameur@ameur-Inspiron-15-3567:~/printf$./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[, ]
Length:[39, 39]
Negative:[]
Negative:[-762534]
Unsigned:[]
Unsigned:[2147484671]
Unsigned octal:[]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[, ]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[]
Len:[12]
Unknown:[]
```
### Contributor:
* Ameur besbes
* Amir Othmani
# printf
