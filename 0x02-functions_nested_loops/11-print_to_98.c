#include "main.h"

/**
 * print_to_98 - prints nautral numbers from n to 98
 *
 * @n: starting integer
 *
 * Return: nothing to return
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
	{
		while(n < 98)
			printf("%d, ", n++);

		printf("%d\n", n);
	}

}
