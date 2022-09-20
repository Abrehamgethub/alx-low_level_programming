#include "main.h"
/**
 * print_diagonal -  prints diagonal lines
 * @n: Number of gaps
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
