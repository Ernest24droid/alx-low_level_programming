#include <unistd.h>
/**
 * _putchar - writes the character C to standard output
 *
 * Return: Always 1 (executable)
 *
 * On error, -1 is returned
 */
int _putcher(char c)
{
return (write(1 , &c, 1));
}
