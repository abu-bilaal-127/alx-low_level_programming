#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints natural numbers from n-98
*
* @n: integer n
*
* Return: void
**/
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d, ", n);
		n++;
	}
}
