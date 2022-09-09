#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the program prints lowercase in reverse
 * using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
