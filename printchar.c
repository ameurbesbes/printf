#include "holberton.h"
/**
 *
 * 
 * 
 */
int printc(va_list va)
{
	_putchar(va_arg(va,char));
	return(1);
}