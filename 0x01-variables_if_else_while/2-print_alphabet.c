#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (1)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
