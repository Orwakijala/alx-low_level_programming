#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lower case
 *
 *
 * Return: void
 */

void print_alphabet(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; mychar++)
	{
		_putchar(mychar);
	}
	_putchar('\n');
}
