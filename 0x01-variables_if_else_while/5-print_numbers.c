#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the decimal digits (0..9)
 *
 * Return: 0
**/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
