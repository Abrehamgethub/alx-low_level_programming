#include<stdio.h>
/**
 * Main - Entry point
 *
 * Description:out puts lowercase and then uppercase
 * using the putchar function
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case < = 'z'; lower_case++)
	{
		putchar(lower_case);
	}

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}

	putchar('\n');

	return (0);
}

