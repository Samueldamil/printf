#include "main.h"
/**
 * print_binary - convert integer to binary
 * @num: integer to print
 *
 * Return: binary
 */
int print_binary(unsigned int num)
{
	int cha_num = 0, index = 0;
	char bin[sizeof(unsigned int) * 8];

	if (num == 0)
	{
		cha_num += _putchar('0');
		return (cha_num);
	}
	if (num == 1)
	{
		cha_num += _putchar('1');
		return (cha_num);
	}
	while (num > 0)
	{
		bin[index] = '0' + (num % 2);
		num = num / 2;
		index++;
	}
	index--;
	while (index >= 0)
	{
		cha_num += _putchar(bin[index]);
		index--;
	}
	return (cha_num);
}
