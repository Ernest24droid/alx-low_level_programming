#include <stdio.h>
/**
 * main - Entry print out numbers 0-9
 *
 * Return: Always (Executable)
 */
int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
	putchar(x);
}
putchar('\n');
return (0);
}
