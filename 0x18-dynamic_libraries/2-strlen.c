#include "main.h"

/**
 * _strlen - main function that take a string as an argument
 * @s: Inputed argument
 *
 * Return: The length of an unputed robber
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}
