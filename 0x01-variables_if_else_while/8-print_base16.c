#include <stdio.h>
/**
 * main - Entry prints hexadecimal numbers
 *
 * Return: Always (Executable)
 */
int main(void)
{
char x;

for (x = '0'; x <= '9'; x++)
{
	putchar(x);
}
for (x = 'a'; x <= 'f'; x++)
{
	putchar(x);
}
putchar('\n');
return (0);
}
