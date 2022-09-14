#include "main.h"
/**
 * _islower - function checks lowercase characters
 * @c: the int
 * Reutrn: zero
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
