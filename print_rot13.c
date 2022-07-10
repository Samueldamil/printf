#include "main.h"
/**
 * print_rot13 - encode a string using rot13
 * @s: string to encode
 * Return: character
 */
int print_rot13(char *s)
{
	char nor[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		      'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		      'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		      'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		      'Z', ' '};
	char rot[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		      'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		      'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		      'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		      'M', ' '};
	int count, len, count2 = 0, cha_num = 0;
	char now, *rot13d;

	len = 0;
	while (*(s + len))
		len++;
	rot13d = malloc(sizeof(char) * len);
	if (rot13d == NULL)
	{
		free(rot13d);
		return (0);
	}
	len = 0;
	while (*(s + len))
	{
		now = *(s + len);
		for (count = 0; count < 53; count++)
		{
			if (now == nor[count])
			{
				*(rot13d + len) = rot[count];
				count2 = count;
				break;
			}
		}
		if (*(rot13d + len) != rot[count2])
			*(rot13d + len) = now;
		if (*(rot13d + len) == '\\')
		{
			*(rot13d + len + 1) = *(s + len + 1);
			len++;
		}
		len++;
	}
	*(rot13d + len) = '\0';
	cha_num= print_string(rot13d);
	free(rot13d);
	return (cha_num);
}
