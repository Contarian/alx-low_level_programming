#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints combination of numbers
  *
  * Return: Always (1)
  */
int main(void)
{
	int c;

	int s;

	for (c = '0'; c <= '9'; c++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(s);

				if (c != '8' || (c == '8' && s != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

