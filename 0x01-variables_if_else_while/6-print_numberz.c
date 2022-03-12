#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing single digits numbers
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
