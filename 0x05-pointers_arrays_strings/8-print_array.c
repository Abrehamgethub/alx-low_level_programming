#include "mian.h"
#include <stdio.h>
/**
 * print_array - check the main.h file
 * @a: Array name
 * @n: Array index total
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printsf("%d", a[i]);

		if (i + 1 != n)
			printf(", ")
	}
	printf("\n");
}
