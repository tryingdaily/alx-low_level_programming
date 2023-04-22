#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: Prints all possible different combo of 3 digits
 * Return: 0
 */
int main(void)
{
	int c, d, e = 0;

	while (e < 10)
	{
		d = 0; 
		while (c < 10)
		{
			if (c != d && != e < d && d < c)
			{
				putchar('0' + e);
				putchar('0' + d);
				putchar('0' + c);

				if (c + d + e != 9 + 8 + 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	e++;
}
putchar('\n');
return (0);
}
