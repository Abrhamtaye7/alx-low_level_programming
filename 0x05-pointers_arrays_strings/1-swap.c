#include "main.h"

/**
 * swap_int - function that swaps the values of a and b
 *
 * @a: variable to be swapped
 * @b: variable to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
