#include "main.h"
/**
 * _abs - computes the absolute value for an integer
 * @n: number to be checked
 * Return: 0 or 1
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
