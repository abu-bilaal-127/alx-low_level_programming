#include "main.h"

/**
* _abs - absolute value
*
* @n: integer value
*
* Description - computes absolute value of an int
*
* Return: 0
**/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n *= -1);
	}
	else
	{
		return (n);
	}
}
