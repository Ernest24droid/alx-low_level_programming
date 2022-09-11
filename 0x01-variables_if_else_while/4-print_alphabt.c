#include <stdio.h>
/**
 * main - Entry, lowercase alphabet ommiting q and e
 *
 * Return: Always (Executable)
 */
int main(void)
{
char c;

for (c = 'a'; c >= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
	putchar(c);
}
}
putchar('\n');
return (0);
}

