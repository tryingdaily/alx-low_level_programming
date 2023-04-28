#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: targeted characer
 *
 * Return: 1 if c is upper case else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
