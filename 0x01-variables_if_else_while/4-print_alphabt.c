#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints some letters of alphabet
  *
  * Return: Always (1)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
