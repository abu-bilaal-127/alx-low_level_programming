#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the English
 * alphabet in lowercase ex. q and e
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
		if (ch == 101 || ch ==113)
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar(10);

	return (0);
}
