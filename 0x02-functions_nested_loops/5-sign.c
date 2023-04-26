#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The input number which will be printed by a sign.
 *
 * Return: 1 if number is greater than zero. 0 if number is equal to zero.
 * -1 if number is less than zero.
 */
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
