#include "main.h"
/**
 * print_reverse - print string in reverse order
 * @s: string to be reversed
 * Return: character
 */
int print_reverse(char *s)
{
	int x, y, z, cha_num = 0;
	char *str;

	x = 0;
	y = 0;
	z = 0;
	if (s)
	{
		while (*(s + x))
			x++;
		str = malloc(sizeof(char) * x);
		if (str == NULL)
		{
			free(str);
			return (0);
		}
		for (y = (x - 1); y >= 0; y--)
		{
			*(str + z) = *(s + y);
			z++;
		}
		*(str + x) = '\0';
		cha_num += print_string(str);
		return (cha_num);
	}
	return (0);
}
