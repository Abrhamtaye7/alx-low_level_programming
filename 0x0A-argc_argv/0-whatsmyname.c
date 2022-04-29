#include <stdio.h>
#include "main.h"
/**
 * main - Entry ppoint
 * @argc: size of argv array
 * @argv: array of size argc
 * Return: Always 0 Sucess
 */
int main(int argc, char *argv[])
{
	(void) argc;
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
} 
