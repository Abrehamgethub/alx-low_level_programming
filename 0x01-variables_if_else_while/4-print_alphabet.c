#include<stdio.h>
/**
 * Main - Entry point
 * Return: Always 0 (Success/Correct)
 */
int main(void)
{
	char alphabet;
	for(alphabet='a';alphabet<='z';alphabet++)
	{
		if(alphabet == 'q')
		{
			continue;
			else if(alphabet == 'e')
				continue;
			putchar('\n');
			return (0);
		}
	}
}
