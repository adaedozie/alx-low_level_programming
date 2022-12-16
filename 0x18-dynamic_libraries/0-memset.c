#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @c: The char variable which is an argument of the function
 * @n: An unsigned int variable
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int j = 0;
	
	while (j < n)
	{
		s[j] = c;
		++j;
	}
	return (s);
}
