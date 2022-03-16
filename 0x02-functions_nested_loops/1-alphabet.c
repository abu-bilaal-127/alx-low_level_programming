#include "main.h"

/**
* print_alphabet - a void function
*
* Description - prints the english alphabets
*
* Return: void
**/
void print_alphabet(void)
{
	int counter = 97;

	while (counter < 123)
	{
		_putchar(counter);
		counter++;
	}

	_putchar('\n');
}
