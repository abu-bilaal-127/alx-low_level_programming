#include "main.h"

void print_alphabet(void)
{
	int counter = 97;

	while(counter < 122)
	{
		_putchar(counter);
		counter++;
	}
	
	_putchar('\n');
}
