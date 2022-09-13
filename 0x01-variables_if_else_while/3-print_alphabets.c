#include <stdio.h>
/**
 * main - Entry point
 * Description - 'the program's description'
 * Return: always 0 (Success)
 */

int main(void)
{
	char C;
	char S;

	for (C = 'a'; C <= 'z'; ++C)
		putchar(C);
	for (S = 'A'; S <= 'Z'; ++S)
		putchar(S);
	     putchar('\n');
	return (0);
}
