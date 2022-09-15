#include "main.h"

/**
 *  _isalpha -> checks for the alphabet
 * @c: a character argument
 * Return: return 1 and 0 depending on the condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A'));
}
