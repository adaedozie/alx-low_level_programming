#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *
 *Return: always zero(success)
 */

int main(void)
{
  char letter;

  for (letter = 'a'; letter <= 'z' ; letter++)
    putchar (letter);
  putchar ('\n');
  return (0);
}
