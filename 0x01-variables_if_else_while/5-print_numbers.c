#include <stdio.h>
/**
 * main - Entry prints single digit numbers of base 10 from 0
 *
 * Return: Always (Executable)
 */
int main(void)
{
char x;

for (x = '0'; x<= '9'; x++)
{
	putchar(x);
}
putchar('\n');
return (0);
}
