#include <stdio.h>

/**
 * print_number - Prints numbers
 * @n: number to printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		putchar(45);
		x = -n;
	}
	if (x / 10)
	{
		print_number(x / 10);
		putchar((x % 10) + '0');
	}
}
