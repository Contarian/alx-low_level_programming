#include <stdio.h>
#include "main.h"

/**
 * main -print_alphabet_x10
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{       
    char c;
    int i;
    i = 0;
    while (i<10)
    {
    for (c = 'a'; c <= 'z'; c++)
    { 
	_putchar(c);
    }	

    _putchar('\n');
    i++;
    
    }
    
 
}
