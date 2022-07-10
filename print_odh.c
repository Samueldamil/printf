#include "main.h"
/**
 * dec_to_oct - convert decimal to octal
 * @num: number to be converted
 * Return: character
 */
int dec_to_oct(unsigned int num)
{
	int cha_num = 0;

	if (!num)
		return (0);
	cha_num += (dec_to_oct(num / 8));
	cha_num += _putchar('0' + num % 8);
	return (cha_num);
}
/**
 * dec_to_hex - convert decimal to hexadecimal
 * @c: letter case specifier
 * @num: number to be converted
 * Return: character
 */
int dec_to_hex(char c, unsigned int num)
{
	int cha_num = 0;

	if (!num)
		return (0);
	cha_num += (dec_to_hex(c, num / 16));
	if (num % 16 < 10)
		cha_num += _putchar('0' + num % 16);
	else if (num % 16 > 9 && c == 'x')
		cha_num += _putchar(87 + num % 16);
	else
		cha_num += _putchar(55 + num % 16);
	return (cha_num);
}
/**
 * print_odh - print number in octal, decimal and hexadecimal
 * @c: type to be converted into
 * @num: number to convert
 * Return: character
 */
int print_odh(char c, unsigned int num)
{
	int cha_num = 0;

	if (c == 'u')
		cha_num += print_num(num);
	else if (c == 'o' && num == 0)
		cha_num += print_string("00");
	else if (c == 'o')
		cha_num += dec_to_oct(num);
	else if ((c == 'x' || c == 'X') && num == 0)
		cha_num += print_string("00");
	else
		cha_num += dec_to_hex(c, num);
	return (cha_num);
}
