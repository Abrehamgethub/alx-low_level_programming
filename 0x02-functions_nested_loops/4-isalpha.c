#include "main.h"

/**
 * _isalpha - function to check if letter, lower or uppercase
 * @c: is a the key to
 *
 * Return : 1 if success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
