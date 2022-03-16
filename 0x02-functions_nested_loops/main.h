#include <unistd.h>

/**
 * The _putchar writes the character _putchar to stdout
 * @c: is the character to print
 *
 * Return: on success 1
 * on error, -1 is returned and error is appropriately set
 */
int _putchar(char c)

{

		return (write(1, &c, 1));

}
