#include "main.h"
/**
 * _isalpha(int c) - checks for alphabetic character
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'a')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

