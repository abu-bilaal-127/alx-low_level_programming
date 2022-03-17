#include <stdio.h>

int main(void)
{
	int number;

	for (number = 1; number < 101; number++)
	{
		if (number % 15 == 0)
		{
			printf ("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			printf ("Fizz ");
		}
		else if (number % 5 == 0)
		{
			if (n == 100)
				printf("Buzz");
			else
				printf ("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
}
