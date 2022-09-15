#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, c

		for (c = 0; c < 50; c++)
		{
			c = a + b;
			printf("%lu", c);

			a = b;
			b = c;

			if (c == 49)
				printf("\n);
			else
				printf(", ");
		}
	return (0);
}

