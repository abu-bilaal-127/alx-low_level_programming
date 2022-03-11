#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the English alphabets
 * in lowercase and uppercase.
 *
 * Return: 0
**/
int main(void)
{

	/**
	 * function_name - char
	 * Description - prints a character (in lowercase)
	 */
	char ch = 'a';

	/**
	 * function_name - char
	 * Description - prints a character (in uppercase)
	 */
	char chr = 'A';

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}

	while (chr < 91)
	{
		putchar(chr);
		chr++;
	}

	return (0);
}
