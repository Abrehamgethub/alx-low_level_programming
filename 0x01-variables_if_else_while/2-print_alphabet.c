#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description: the program outputs lowercase letter
 * using the main function
 * Return: always zero (Success/correct)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar (alphabet);
	}
	putchar('\n');

	return (0);
}
