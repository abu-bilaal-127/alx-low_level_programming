#include "main.h"

/**
* _puts - prints a string followed by a newline
* Description - prints a string followed by a newline
* @str: pointer variable
* Return: void
**/
void _puts(char *str)
{
	int index;

	index = *(str + counter);

	while (index != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
