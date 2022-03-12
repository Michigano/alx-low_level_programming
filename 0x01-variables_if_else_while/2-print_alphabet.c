#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - starting point
 * Return: 0 is exited successfully
 */
int main(void)
{
	char lcase;
	for (lcase='a'; lcase<= 'z'; lcase++)
		putchar(lcase);
	putchar('\n);
	return (0);
}
