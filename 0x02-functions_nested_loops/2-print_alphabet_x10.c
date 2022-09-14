#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char apb;
	int c;

	c = 0;

	while (c < 10)
	{
		apb = 'a';
		while (apb <= 'z')
		{
			_putchar(apb);
			apb++;
		}
		_putchar('\n')
		c++;
	}
}

