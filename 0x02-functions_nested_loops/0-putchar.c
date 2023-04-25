#include "main.h"
/**
 * main - prints _putchar and a new line 
 * Return: 0
 */
int main(void)
{
	char _characters[10] = "_putchar\n";

	int i;

	for (i = 0; i < 9, i++)
	{
		_putchar(_characters[i]);
	}
	_putchar(10);

	return (0);
}
