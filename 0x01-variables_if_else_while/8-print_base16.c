#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Printing hexadecimals
 * Return: 0 if successful
 */
int main(void)
{
	int h;
	char hex;

	for (h = 0; h <= 9; h++)
		putchar(h);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
