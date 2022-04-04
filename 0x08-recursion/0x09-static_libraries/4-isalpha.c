#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * Return: 1 0r 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
