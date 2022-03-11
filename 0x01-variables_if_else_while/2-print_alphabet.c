#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints small letter of the English alphabet.
 *
 * Return: 0
**/
int main(void)
{

	/**
	 * function_name - char
	 * Description - prints a character
	 */
	char ch = 'a';

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);

	return (0);
}
