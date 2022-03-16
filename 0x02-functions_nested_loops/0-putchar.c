#include "main.h"

/**
* main - entry point
*
* Description - prints "_putchar"
*
* Return: 0
**/
int main(void)
{
	char text[9] = "_putchar";
	int i =0;

	while (i < 9)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar("\n");

	return (0);
}
