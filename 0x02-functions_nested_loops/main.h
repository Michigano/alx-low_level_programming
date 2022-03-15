#include <unistd.h>
/**
 * The _putchar writes the character _putchar to stdout
 * The character to print is @c:
 * Return: 1 if successful
 * on error, -1 is returned and error is appropriately set
 */
int _putchar(char c)

{

		return (write(1, &c, 1));

}
