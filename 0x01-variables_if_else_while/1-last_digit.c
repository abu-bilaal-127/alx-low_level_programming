#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the last digit of a number.
 *
 * Return: 0
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last = n % 10;
	
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else
		printf("Last digit of %d is %d and is 0\n", n, last);

	return (0);
}
