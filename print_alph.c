#include "main.h"
/**
 * print_string - print every character
 * @l: va_list argument
 * @f: pointer of a struct flag
 * Return: number of character
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
/**
 * print_char - print a character
 * @l: va_list arguments
 * @f: pointer of a struct flag
 * Return: number of char
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;

	_putchar(va_arg(l, int));
	return (1);
}
