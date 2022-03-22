#include "main.h"

/**
 * puts2 - Print out every other char of the string
 * @str: string to print
 */
void puts2(char *str)
{
	int i;
	int len = 0;
	char *s = str;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0; str[i] != '\0' && i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

