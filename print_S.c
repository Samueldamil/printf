#include "main.h"
/**
 * print_S - print string in a formatting way
 * @str: string to be printed
 * Return: character
 */
int print_S(char *str)
{
	int i = 0, cha_num = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if ((c > 0 && c < 32) || c >= 127)
		{
			cha_num += _putchar('\\');
			cha_num += _putchar('x');
			cha_num += _putchar('0');
			cha_num += print_odh('X', (unsigned int)c);
		}
		else
		{
			cha_num += _putchar(c);
		}
		i++;
	}
	return (cha_num);
}
