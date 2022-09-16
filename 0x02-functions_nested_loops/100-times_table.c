#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: variable
 * Return: none
 */
void print_times_table(int n)
{
	int digit, mult, result;

	if (n >= 0 && n <= 15)
	{
		for (digit = 0; digit <= n; digit++)
		{
			for (mult = 0; mult <= n; mult++)
			{result = mult * digit;
				if (mult == 0)
				{
					_putchar(result + '0');
				}
				else if (result < 10 && mult != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
