#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to the variable
 *
 * Descriptions: using main random variable is executed
 * and a random nuber is assigned to a variable
 * Return: Always 0 when not
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is grater than5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
		}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
