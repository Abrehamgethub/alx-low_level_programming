#include "man.h"
/**
 * print_sign - a function checks letter sign
 * @n: is the integer whic checks the characters
 * Return: zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
