#include <stdio.h>
/**
 * main - Entry point
 * Description - 'the program's description'
 * Return: always 0 (Success)
 */

int main(void)
{
	int C;
	char S;

	for (C = '0'; C <= '9'; ++C)
		putchar(C);
	for (S = 'a'; S <= 'f'; ++S)
		putchar(S);
	     putchar('\n');
	return (0);
}
