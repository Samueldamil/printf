#include "main.h"
/**
 * print_pointer - print address of a pointer
 * @p: pointer to a pointer
 * Return: character
 */
int print_pointer(void *p)
{
	int cha_num = 0;

	cha_num += print_string("0x");
	cha_num += print_odh('x', (unsigned long int)p);
	return (cha_num);
}
