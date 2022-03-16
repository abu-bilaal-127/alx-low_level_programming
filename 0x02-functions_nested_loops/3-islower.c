#include "main.h"

/**
* _islower - lowercase checker
*
* @c: ascii character
*
* Description - checks for lowercase
*
* Return: 1 | 0 depending on c
**/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
