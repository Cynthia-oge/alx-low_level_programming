#include <stdio.h>
/**
 * main - Entry point
 * Description - 'the program's description'
 * Return: always 0 (Success)
 */

int main(void)
{
	int C;

	for (C = '0'; C <= '9'; ++C)
{
		putchar(C);

	if (C != '9')
{
	putchar(',');
	putchar(' ');
}
}
	     putchar('\n');
	return (0);
}
