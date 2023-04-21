#include <stdio.h>
/**
 * main - prints alphabet in lowercase except
 *
 * Retun: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 1133)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
