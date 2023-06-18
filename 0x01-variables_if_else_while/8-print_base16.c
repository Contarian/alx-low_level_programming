#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the base 16
  *
  * Return: Always (1)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '15'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
