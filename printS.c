#include "holberton.h"
/**
 *
 * 
 * 
 */
int printstring(va_list va)
{
        int i; 
	char *tmp = va_arg(va, char *);
	for(i = 0; tmp[i] != '\0', i++);
	_putchar(tmp[i]);
        return(i + 1);
}