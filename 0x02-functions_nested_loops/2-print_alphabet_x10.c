#include "main.h"
/**
 * print_alphabet_x10 - lowercase alphabet print 10x
 *
 * Description: prints lowercase 10x
 * using a function _putchar
 * Return: Aleays 0.
 */
void print_alpahbet_x10(void)
{
	int  i;
	int ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
