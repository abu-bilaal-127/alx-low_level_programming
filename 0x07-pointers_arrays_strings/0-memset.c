#include "main.h"

/**
* _memset - fills memory with a constant byte
* Description - fills memory with a constant byte
* @b: constant byte variable
* @n: unsigned int representing bytes of memory
* @s: pointer variable
* Return: memory location
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
