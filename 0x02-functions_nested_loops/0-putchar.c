#include <unistd.h>
#include "main.h"
/**
 * main - printing hello word with _putchar
 * Return: 1 if successfull
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');
	//return (1);
}
