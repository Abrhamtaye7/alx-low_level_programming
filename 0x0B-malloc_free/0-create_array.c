#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: character
 * Return: char pointer to array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
