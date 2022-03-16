#include "main.h"

/**
* print_alphabet_x10 - a void function
*
* Description - prints the english alphabets 10X.
*
* Return: void
**/
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		int characta = 97;

		while (characta < 123)
		{
			_putchar(characta);
			characta++;
		}

		_putchar('\n');
		counter++;
	}
}
