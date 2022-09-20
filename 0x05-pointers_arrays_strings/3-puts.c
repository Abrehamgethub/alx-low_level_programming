#include "main.h"
/**
 * _puts - check the file from main.h
 * @str: string to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_puchar(str[i]);

	_putchar('\n');
}
