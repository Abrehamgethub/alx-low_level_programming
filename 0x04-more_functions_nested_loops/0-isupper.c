#include "main.h"
/**
 * _isupper - a function that prints uppercase
 * @c: charater to be printed
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
