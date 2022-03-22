#include "main.h"

/**
* _puts - prints a string followed by a newline
* Description - prints a string followed by a newline
* @str: pointer variable
* Return: void
**/
void _puts(char *str)
{
	int index, counter;

	counter = 0;
	index = *(str + counter);

	while (index != '\0')
	{
		_putchar(str[index]);
		counter++;
	}

	_putchar('\n');
}
