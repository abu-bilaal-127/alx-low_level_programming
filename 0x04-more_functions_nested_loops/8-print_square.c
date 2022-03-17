#include "main.h"

/**
* print_square - prints a squared shape
* Description - prints a squared shape
* @size: integer variable
* Return: void
**/
void print_square(int size)
{
	int counter = size;
	int counter01 = size;

	for(counter01 = size; counter01 > 0; counter01--)
	{
		for(counter = size; counter > 0; counter--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
