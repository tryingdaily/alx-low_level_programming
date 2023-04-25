#include "main.h"

/**
 * print_sign -  prints the sign of a number
 *
 * @n: input value
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	int return_value;

	if (n > 0)
	{
		_putchar('+');
		return_value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return_value = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
	       return_value = -1;
	}
	{
		return (return_value);
	}
}
