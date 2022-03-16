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
	if (n < 99)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 99)
	{
		while (n > 99)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d\n", n);
		return;
	}

	printf("98\n");
}
