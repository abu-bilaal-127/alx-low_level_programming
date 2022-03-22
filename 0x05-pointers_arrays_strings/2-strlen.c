#include "main.h"
#include <string.h>

/**
* _strlen - returns the length of a string
* Description - returns the length of a string
* @s: pointer variable to a character
* Return: integer
**/
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
