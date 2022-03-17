#include "main.h"

/**
* print_diagonal - prints a diagonal line
* Description - prints a diagonal line of length n
* @n: integer variable
* Return: void
**/
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for(x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		y++;
	}
	else
	{
		_putchar('\n');
	}
}
