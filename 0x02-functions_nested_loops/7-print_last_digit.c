#include "main.h"
/**
 * print_last_digit - retruns the last didgit
 * @n: integer input
 * Return: 0 or 1
 */
int print_last_digit(int n)

{
	int c;

	if (n < 0)
		c = -1 * (n % 10);
	else
		c = n % 10;
	_putchar((c % 10) + '0');
	return (n % 10);
}
