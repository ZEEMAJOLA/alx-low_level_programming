#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alph;

	while (count++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');

	}
}
