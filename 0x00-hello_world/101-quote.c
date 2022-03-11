#include <stdio.h>
#include <unistd.h>

/**
 * main - C program that prints exact sentence
 * Return: 0 if exited successfully
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
