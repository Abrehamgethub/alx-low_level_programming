#include "main.h"
/**
 *int _islower - check for lowercase character
 *
 *Description: checks for lowercase characters
 *using a function _islower
 *Return: Always 0 (successful)
 */
int _islower(int c)
{
	int c;

	c = tolower(c);
	if(_islower( c ));
	{
		_putchar(c + '1');
			_putchar('/n');
	}
	else
		return (0);
}
