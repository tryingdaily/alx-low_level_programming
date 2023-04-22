#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main funtion
 * Description: prints all single digit of base 10
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
