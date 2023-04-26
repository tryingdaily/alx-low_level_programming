#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (c < 10)
	{
		for (c = 'a'; c < 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}

}
