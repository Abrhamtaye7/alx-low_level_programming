#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int num;
	
	num = n;
	if (n < 0)
	{
		_putchar('45');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
