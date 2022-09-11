#include <stdio.h>
/**
 * main - Entry prints lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
