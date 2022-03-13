#include <stdio.h>
#include <stdlib.h>
/**
 * main - Printing all possible combinations of two two-digit numbers
 * Return: 0 if exited successfully
 */
int main(void)
{
	int t, d;

	for (t = 0; t <= 98; t++)
	{
		for (d = t + 1; d <= 99; d++)
		{
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			if (t == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
