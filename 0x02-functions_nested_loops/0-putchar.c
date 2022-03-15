#include <unistd.h>
#include <joshua.h>
/**
 * main - printing hello word with _putchar
 * Return: 0 if successfull
 */
int main(void)
{
	char word[6] = "Joshua";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
