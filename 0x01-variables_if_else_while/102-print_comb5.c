#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Description: Write a program that prints all possible different combos of two numbers
 * Return: 0
 */
int main(void)
{
	int c1 = 0;
	int da1; 
	int db1; 

	int c2;
	int da2;
	int db2;

	while (c1 <= 98)
	{
		da1 = (c1 / 10 + '0');
		db1 = (c1 % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			da2 = (c2 / 10 + '0');
			db2 = (c2 % 10 + '0');

			if (c1 < c2)
			{
				putchar(da1);
				putchar(db1);
				putchar(' ');
				putchar(da2);
				putchar(db2);

				if(c1 != 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
			c2++;
		}
		c1++;
	}
	putchar('\n');
	return (0);
}
