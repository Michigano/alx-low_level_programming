#include <stdio.h>
/*
 * main - printing sizes of various types of computer
 * Return 0 if succesfull
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a))
	"Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b))
	"Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c))
	"Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d))
	"Size of float: %lu byte(s)\n", (unsigned long)sizeof(f)
	return (0);
}
