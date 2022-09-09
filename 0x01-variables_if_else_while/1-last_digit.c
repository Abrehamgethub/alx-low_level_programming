#include <stdlib.h>
#include <time.h>
/* Entry pointer */

/* Description : Main assigns random number */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n > 0)
		{
			printf("Last digit %d is less than 6 and not 0\n", n, n %10);
		}
		return (0);
	}
}
