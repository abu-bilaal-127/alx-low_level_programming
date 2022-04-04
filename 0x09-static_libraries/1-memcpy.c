#include "main.h"

/**
* _memcpy - copies memory area
* Description - copies memory area
* @n: unsigned int, amount of bytes copied
* @src: pointer variable for source
* @dest: pointer variable for destination
* Return: @dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
