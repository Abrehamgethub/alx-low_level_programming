#include "main.h"
/**
 * _strlen - check the main.h file
 * @s: Inserted string
 * Return: Alwaus 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
