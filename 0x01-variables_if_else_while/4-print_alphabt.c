#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: the program outpus lowercase letters
 * using putchar function
 * Return: Always 0 (Success/Correct)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
		{
			continue;
		}
		else if (alphabet == 'e')
		{
			continue;
		}
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
