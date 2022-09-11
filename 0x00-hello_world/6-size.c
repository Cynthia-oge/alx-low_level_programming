#include <stdio.h>
/**
 * main - Entry point
 * Description: t'the program's description'
 * Return: always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	//evaluate the size of types
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
}

