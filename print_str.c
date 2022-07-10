#include "main.h"
/**
 * print_string - prints string to stdout
 * @str: string to print
 * Return: number of characters
 */
int print_string(char *str)
{
	int cha_num = 0;
	
	if (str == (char *)0)
		cha_num += print_string("(null)");
	while (str && str[cha_num])
	{
		_putchar(str[cha_num]);
		cha_num++;
	}
	return (cha_num);
}
