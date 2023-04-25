#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to standard output (stdout)
 *
 * @c: character to be printed
 *
 * Return: On success 1, else if error returns -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
