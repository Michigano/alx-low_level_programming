#include <stdio.h>
#include <stdlib.h>

/**
 * main - C program that prints exact sentence
 * Return: 0 if exited successfully
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
