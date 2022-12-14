#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numberes with 1 & 2.
 * Numbers should be comma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int num1, num2, num3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			num1 = (bk1 + bk2) / LARGEST;
			num2 = (bk1 + bk2) % LARGEST;
			num3 = fr1 + fr2 + num1;
			fr1 = fr2, fr2 = num3;
			bk1 = bk2, bk2 = num2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			num2 = bk1 + bk2;
			bk1 = bk2, bk2 = num2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
