#include "main.h"

/**
* _puts2 - prints every other character of a string
* Description - prints every other character of a string
*followed by a newline, starting with the firs character.
* @str: pointer variable
* Return: void
**/
void _puts2(char *str)
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
