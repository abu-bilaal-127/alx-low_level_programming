#include "main.h"

/**
* swap_int - swaps the values of two integers
* Description - swaps the values of two integers
* @*a: pointer variable to an integer
* @*b: pointer variable to an integer
* @swap: integer variable
* Return: void
**/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
