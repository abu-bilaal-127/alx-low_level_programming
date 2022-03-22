#include "main.h"

/**
* puts_half - prints half a string followed by a newline
* Description - prints half a string followed by a newline
* @str: pointer variable
* Return: void
**/
void puts_half(char *str)
{
	int index, index2;

	index = 0;
	index2 = 0;

	while (str[index] != '\0')
	{
		if (str[index2] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[index2]);
			index2 += 2;
			index++;
		}
	}

	_putchar('\n');
}
