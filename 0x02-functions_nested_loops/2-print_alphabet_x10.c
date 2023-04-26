#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char i;

	while (c < 10)
	{

		c = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	i++;
	}

}
