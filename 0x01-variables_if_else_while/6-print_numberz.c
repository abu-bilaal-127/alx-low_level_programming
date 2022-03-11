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
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
