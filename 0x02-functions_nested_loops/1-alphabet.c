#include "main.h"
/**
 *main - Entry point
 *
 * Description: prints lower case alphabets
 * using a function puthar
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int ch;

	for (ch = ‘a’; ch <= ‘z’; ch++)
		putchar(ch);
	putchar(‘\n’);
	print_alphabet();
	return (0);
}
