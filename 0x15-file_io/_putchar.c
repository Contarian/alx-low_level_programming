#include <unistd.h>

/**
 * _putchar - will writes the char c to stdout
 * @c: The char to  be printed.
 *
 * Return: when On success 1.
 * when there is an  error, -1 will be returned, and when there is no error it  is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
