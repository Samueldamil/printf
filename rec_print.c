#include "main.h"
/**
 * get_print - choose the right printing function
 * @s: character thatholds conversion specifier
 * Return: pointer to the matching printing function
 */
int (*get_print(char s))(va_list l, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'o', print_octal},
		{'b', print_binary},
		{'x', print_hex},
		{'X', print_hex_big},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent},
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
