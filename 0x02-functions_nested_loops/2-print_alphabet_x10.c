#include "main.h"

/**
 * print_alphabet_x10 -> print lower cases 10x;
 */

void print_alphabet_x10(void)
{
	int x;
	int i;

	for (x = 1; x <= 10; x++)
{
	for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
