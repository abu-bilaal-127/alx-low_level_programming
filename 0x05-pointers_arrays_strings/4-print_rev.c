#include "main.h"

/**
* print_rev - prints a string in reverse
* Description - prints a string in reverse
* @s: pointer variable to a character
* Return: void
**/
void print_rev(char *s)
{
	int counter;

	counter = 0;

	while (*(s + counter) != 0)
		counter++;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}

	_putchar('\n');
}
