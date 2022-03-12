#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing lower case alphabets except q and e
 * Return 0 if successfuly exited
 */
int main(void)
{
	char lcase, e, q;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != e && lcase != q)
			putchar(lcase);
	}
	putchar('\n');
	return (0);
}
