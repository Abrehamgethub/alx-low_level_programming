#include "main.h"
/**
 * swap_int - check the main.h file
 * @a: First numbers
 * @b: Second number
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
