#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 **/
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char ch = 'a';

		while (a <= z)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		a++;
	}
}
