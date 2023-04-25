#include "main.h"
/**
 * main - prints _putchar and a new line 
 * Return: 0
 */
int main(void)
{
	char _putchar[10] = "_putchar";

	int i;

	for (i = 0; i < 8, i++)
	{
		_putchar(_putchar[i]);
	}
	_putchar(10);

	return (0);
}
