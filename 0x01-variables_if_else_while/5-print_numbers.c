#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Description: prints all numbers of base 10 starting at 0
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
