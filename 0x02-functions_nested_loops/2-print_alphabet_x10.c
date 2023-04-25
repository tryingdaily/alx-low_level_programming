#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwzyz";
	int i = 0, j;

	while( i < 10)
	{
		j = 0;
		
		while( j < 26)
		{
			_putchar(alphabet[j]);
			
			j++;
		}
		_putchar('\n'); 
		
		i++;
	}

}
