#include "main.h"
/**
 * printchar - prints character
 * @list_args : list of arguments
 * Return: 1
 */
int printchar(va_list list_args)
{
	_putchar(va_arg(list_args, int));
	return (1);
}
