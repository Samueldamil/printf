#include "main.h"
/**
 * print_unknown_spec - print unknown specifiers
 * @c: character
 * Return: character
 */
int print_unknown_spec(char c)
{
	int cha_num = 0;

	if (c == '%')
	{
		cha_num += _putchar('%');
	}
	else
	{
		cha_num += _putchar('%');
		cha_num += _putchar(c);
	}
	return (cha_num);
}
