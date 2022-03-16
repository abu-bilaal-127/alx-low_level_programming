#include "main.h"

/**
* times_table - multiplication table function
*
* Description - prints mulitiplication table 1-9
*
* Return: void
**/
void times_table(void)
{
	int multiplier, number;

	multiplier = 0;

	while (multiplier < 10)
	{
		for (number = 0; number < 10; number++)
		{
			int result = number * multiplier;

			_putchar(result);
			_putchar('\n');
		}

		multiplier++;
	}
}
