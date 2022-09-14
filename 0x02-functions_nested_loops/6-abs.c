#include "main.h"
/**
 * _abs - function to compute absolute value
 * @c: with the integer
 * :Return: zero
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
