#include "main.h"
#include <stdio.h>

/**
 * _strcat => a function to concatenate two string
 * @dest: a variable to concatenate
 * @src: the second variable
 * Return: returns pointer to @dest 
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
