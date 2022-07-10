#include <unistd.h>
/**
 * write output to stdout
 * @c: character to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
