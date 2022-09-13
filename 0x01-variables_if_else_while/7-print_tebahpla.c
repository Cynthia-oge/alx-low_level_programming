#include <stdio.h>
/**
 * main - Entry point
 * Description - 'the program's description'
 * Return: always 0 (Success)
 */

int main(void)
{
	char C;

	for (C = 'z'; C >= 'a'; --C)
		putchar(C);
	     putchar('\n');
	return (0);
}
