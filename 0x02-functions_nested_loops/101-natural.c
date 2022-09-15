#include "main.h"
#include <stdio.h>

/**
 * main - list numbers below 10that are multiles of 3 0r 5
 *
 * Return: 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}

