#include "main.h"
/**
 *main - Entry point
 *
 * Description: prints lower case alphabets
 * using a function puthar
 * Return: Always 0 (Successful)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = ‘a’; ch <= ‘z’; ch++)
		putchar(ch);
	putchar(‘\n’);
}
