#include "main.h"
/**
 * more_numbers - prints more numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num, i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 90)
				_putchar(num / 10 + '0');
		}
		_putchar('\n');
	}
}
