#include "main.h"

/**
 * _strlen - returns the length of a striing
 * @s: string
 * Return: String length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	retrun (count);
}

