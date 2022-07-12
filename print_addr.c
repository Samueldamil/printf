#include "main.h"
/**
 * print_address - print address of input in hexa format
 * @l: va_list arguments
 * @f: pointer to the flag
 * Return: number of char
 */
int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned int p = va_arg(l, unsigned long int);
	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
