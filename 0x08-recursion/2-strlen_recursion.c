#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *@s : input
 *Return: lenfth of s
 */
int _strlen_recursion(char *s)
{
	int i = 1;
	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1);
	}
	else
	{
		i--;
	}
	return (i);
}
