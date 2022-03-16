#include "main.h"

void times_table(void)
{
	int multiplier = 0;

	while (multiplier < 10)
	{
		for (int number = 0; number < 10; number++)
		{
			int result = number * multiplier;
			_putchar(result);
			_putchar('\n');
		}

		multiplier++;
	}
}
