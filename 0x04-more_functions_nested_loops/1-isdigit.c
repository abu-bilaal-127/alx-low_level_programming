#include "main.h"

/**
* _isdigit - checks for 0-9
*
* Description - checks for decimal digits
*
* @c: integer variable
*
* Return: 0 or 1
**/
int _isdigit(int c)
{
	if (c >= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
