#include <stdio.h>
/**
 * a program that prints the name of the file it was compiled from
 *
 * return: success
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
