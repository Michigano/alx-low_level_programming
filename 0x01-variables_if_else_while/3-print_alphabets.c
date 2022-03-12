#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - execution starting point
 * Return: 0 if exited successfully
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
	for (lcase = 'A'; lcase <= 'Z'; lcase++)
		putchar(lcase);
	putchar('\n');
	return (0);
}
