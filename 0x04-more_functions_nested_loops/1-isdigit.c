#include "main.h"
/**
 * _isdigit - checks if 0 to 9
 * @c: Integer to check
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
