#include "main.h"

/**
 * print_array -prints n element of an array of integers
 * followed by a new line
 * @a: integer pointer variable
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0, i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}

