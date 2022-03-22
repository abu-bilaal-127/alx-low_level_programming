#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* Description - prints n elements of an array of integers
* followed by a new line
* @a: pointer variable
* @n: no of elements to be printed
* Return: void
**/
void print_array(int *a, int n)
{
	int index = 0;
	int counter = 0;

	while (*(s + counter) != '\0')
		counter++;

	while (index != n)
	{
		if (n > counter)
		{
			break;
		}
		else if (index == (n - 2))
		{
			printf("%d\n", a[index]);
			index++;

		}
		else
		{
			printf("%d, " a[index]);
			index++;
		}
	}
}
