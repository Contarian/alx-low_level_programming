#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints a serie of numbers with commas
  *
  * Return: Always (1);
  */
int main(void)
{
	int c;

	for (c = '0'; c < '10'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
