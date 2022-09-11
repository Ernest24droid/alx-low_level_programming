#include <stdio.h>
/**
 * main - Entry prints out mirrored lowercase alphabet
 *
 * Return: Always (Executable)
 */
int main(void)
{
char a;

for (a = 'z'; a >= 'a'; a--)
{
	putchar(a);
}
putchar('\n');
return (0);
}
