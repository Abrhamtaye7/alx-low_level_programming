#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int x, y, z;

	x = 0;
	y = 1;
	z = n;
	if (n < 0)
	{
		_putchar('-');
		x = 1;
	}
	while (z > 9 || z < -9)
	{
		y *= 10;
		z /= 10;
	}
	while (y > 0)
	{
		if (y > 9)
		{
			if (!x)
				_putchar((n / y % 10) + '0');
			else
				_putchar((n / y % 10) * -1 + '0');

			y /= 10;
		}
		if (y == 1)
		{
			if (x)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			y = 0;
		}
	}
}
