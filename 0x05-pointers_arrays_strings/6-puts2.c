#include "main.h"
/**
 * puts2 - check the file in main.h
 * @str: string to be aternate
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
		a++;

	a--;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
