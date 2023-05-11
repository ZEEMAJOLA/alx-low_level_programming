#include "main.h"

/**
 * factorial - factoral of a given number
 *@n : input
 *Return: lenfth of s
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
