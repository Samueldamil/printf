#include "main.h"
#include <stdarg.h>
/**
 * _printf - print output according to  a format
 * @format:  is a character string the format string is 
 * composed of zero or more directives
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, cha_num = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			cha_num += _putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			if (format[i] == 's' || format[i] == 'c')
				cha_num += format[i] == 'c' ? _putchar(va_arg(args, int)) :
				print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				cha_num += print_num(va_arg(args, int));
			else if (format[i] == 'b')
				cha_num += print_binary((unsigned int)va_arg(args, int));
			else if (format[i] == 'r')
				cha_num += print_reverse(va_arg(args, char *));
			else if (format[i] == 'R')
				cha_num += print_rot13(va_arg(args, char *));
			else if (format[i] == 'p')
				cha_num += print_pointer(va_arg(args, void *));
			else if (format[i] == 'S')
				cha_num += print_S(va_arg(args, char *));
			else if (format[i] == 'o' || format[i] == 'u' || format[i] == 'x' || format[i] == 'X')
				cha_num += print_odh(format[i], (unsigned int)va_arg(args, int));
			else
				cha_num += print_unknown_spec(format[i]);
		}
		i++;
	}
	va_end(args);
	return (cha_num);
}
