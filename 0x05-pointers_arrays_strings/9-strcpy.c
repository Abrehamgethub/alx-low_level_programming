#include "main.h"
#include <stdio.h>
/**
 * *_strcpy -chech main.h file
 *  @dest: Destination string
 *  @src: String copied
 *  Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != 0)
		a++;

	for (b = 0; b <= a; b++)
		dest[b] = src[b];
	return (dest);
}
