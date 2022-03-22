#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string pointer
 * Return: null
 */

void puts_half(char *str)
{
	int count, length = 0;

	while (*(str + length))
		length++;
		count = length / 2;
	if (length % 2)
		count += 1;
	while (count < length)
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}

