#include <stdio.h>
/**
 * main - Entry prints singe digit no
 *
 * Return - Always (Success)
 */
int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
	putchar(x);
}
if (x != 9)
{
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
