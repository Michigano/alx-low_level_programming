#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int k, l;

	for (k = 0; k < 24; k++)
	{
		for (l = 0; l < 60; l++)
		{
			_putchar(k / 10 + 48);
			_putchar(k % 10 + 48);
			_putchar(':');
			_putchar(l / 10 + 48);
			_putchar(l % 10 + 48);
			_putchar('\n');
		}
	}
}
