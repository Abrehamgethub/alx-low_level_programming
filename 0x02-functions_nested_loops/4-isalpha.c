#include "main.h"
/**
 *_isalpha - function to check is letter or
 * @c: is a the key to
 * Return: zero
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
