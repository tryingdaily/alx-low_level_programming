#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c = 0;
	int i;

	while (c++ <= 10)
	{
		for (i = 'a'; i < 'z'; i++)
			_putchar(i);
		_putchar(10);
	}

}
