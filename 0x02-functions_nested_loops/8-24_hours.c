#include "main.h"
/**
 * jack-bauer - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int k, l;

	for (k = 0; k < 24; k++)
	{
		for (l = 0; l < 60; l++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}
