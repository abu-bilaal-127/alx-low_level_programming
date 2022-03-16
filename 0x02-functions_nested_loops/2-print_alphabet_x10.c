#include "main.h"

/**
* print_alphabet - a void function
*
* Description - prints the english alphabets 10X.
*
* Return: void
**/
void print_alphabet(void)
{
	int character = 97;
	int counter = 0;

	while (counter < 9)
	{
		while (character < 123)
		{
			_putchar(character);
			character++;
		}

		_putchar('\n');
		counter++;
	}
}
