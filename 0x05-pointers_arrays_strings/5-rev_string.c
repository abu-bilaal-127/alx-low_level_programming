#include "main.h"

/**
* rev_string - reverses a string
* Description - reverses a string
* @s: pointer variable to a character
* Return: void
**/
void rev_string(char *s)
{
	int counter, rev_index, rev_string_index;

	char rev_string[];

	counter = 0;
	rev_index = -1;
	rev_string_index = 0;

	while (*(s + counter) != '\0')
		counter++;

	while (counter != rev_index)
	{
		rev_string[rev_string_index] = s[counter];
		rev_string_index++;
		counter--;
	}

	*s = rev_string;
}
