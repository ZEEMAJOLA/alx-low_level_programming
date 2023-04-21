#include <stdio.h>

/**
 * main - prints alphabet in lowercase except
 *
 * Retun: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 97; letter <= 123; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
