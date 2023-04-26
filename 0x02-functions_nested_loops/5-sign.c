#include "main.h"
/**
 * print_sign - shows if number is greater, equal
 * or less than zero
 *
 * @n: The input nuber is an integer.
 *
 * Return: 1 if number if greater than zero. 0 if number is equal to zero.
 * -1 if number is less than zero.
 */
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{ 
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
