#include "main.h"

/**
 * *_strcat() => a function to concatenate two string
 * @dest: a variable to concatenate
 * @src: the second variable
 * Return: always 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	dest[] = "Hello ";
	src[] = "World!\n";
	dest = strcat( *dest, *src);
	_putchar("%s", dest);
	return (0);
}
