#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89 with commas and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 57; m++)
	{
		int n;

		for (n = m + 1; n < 58;  n++)
		{
			putchar(m);
			putchar(n);

			if (m == 56 && n == 57)
				continue;
			putchar(44);
			putchra(32);
		}
	}
	putchar('\n');
	return (0);
}