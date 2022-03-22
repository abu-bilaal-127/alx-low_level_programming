#include "main.h"

/**
* print_rev - prints a string in reverse
* Description - prints a string in reverse
* @s: pointer variable to a character
* Return: void
**/
void print_rev(char *s)
{
	int total_index, rev_index;

	total_index = 0;
	rev_index = -1;

	while (*(s + counter) != 0)
		counter++;

	while (total_index != rev_index)
	{
		_putchar(s[total_index]);
		total_index--;
	}

	_putchar('\n');
}
