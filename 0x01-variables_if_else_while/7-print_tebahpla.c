#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the alphabet at reverse
  *
  * Return: Always (1)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

