#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabet
 * except e and q
 *
 * Retun: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
