#include "main.h"

/**
* swap_int - exchanges the values of two integers
* Description - exchanges the values of two integers
* @a: pointer variable to an integer
* @b: pointer variable to an integer
* Return: void
**/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
