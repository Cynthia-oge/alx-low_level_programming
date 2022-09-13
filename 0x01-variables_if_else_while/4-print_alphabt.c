#include <stdio.h>
/**
 * main - Entry point
 * Description - 'the program's description'
 * Return: always 0 (Success)
 */

int main(void)
{
	char C;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (C = 'a'; C <= 'z'; ++C)
{
	if (C != e && C != q)
		putchar(C);
}
	     putchar('\n');
	return (0);
}
