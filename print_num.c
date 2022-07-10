#include "main.h"
#include <stdio.h>
/**
 * print_num - prints digit from integer
 * @n: integer
 * Return: Nothing
 */
int print_num(long int n)
{
	unsigned long int s, base;
	int cha_num = 0;

	s = 0;
	base = 10;
	if (n < 0)
	{
		cha_num += _putchar(45);
		s = -n;
	}
	else
	{
		s = n;
	}
	if (s < base)
	{
		cha_num += _putchar('0' + s);
	}
	else
	{
		while (s >= base)
		{
			base *= 10;
			if (base == 1000000000)
				break;
		}
		if (!(s > 1000000000))
			base /= 10;
		cha_num += _putchar('0' + (s / base));
		base /= 10;
		while (base >= 10)
		{
			cha_num += _putchar('0' + ((s / base) % 10));
			base /= 10;
		}
		cha_num += ('0' + (s % 10));
	}
	return (cha_num);
}
