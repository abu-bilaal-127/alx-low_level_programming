#include "main.h"

/**
* _isalpha - alphabet checker
*
* @c: ascii character
*
* Description - checks for alphabet
*
* Return: 1 | 0 depending on c
**/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	} else
	{
		return (0);
	}
}
