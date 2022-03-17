#include "main.h"

/**
* print_line - prints ______
* Description - prints a line of length n
* @n: integer variable
* Return: void
**/
void print_line(int n)
{
	int counter = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > counter)
		{
			_putchar('_');
			n--;
		}
	}
}
