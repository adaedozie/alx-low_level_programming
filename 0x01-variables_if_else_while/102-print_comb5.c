#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers.rs.
 *
 *Return: always zero
 */

int main(void)
{
int a, b;
for (a = 0; b <= 98; a++)
{
for (b = a + 1; b <= 99; b++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');

putchar(' ');

putchar((b / 10) + '0');
putchar((b % 10) + '0');

if (a == 98 && b == 99)
break;

putchar(',');
putchar(' ');

}
}
putchar('\n');
return(0);
}
