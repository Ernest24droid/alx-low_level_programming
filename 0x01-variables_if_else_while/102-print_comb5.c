#include <stdio.h>
/**
 * main - prints two digit no. combos
 *
 * Return: Always (executable)
 */
int main(void)
{
int a, b;

for (a = 0; a < 100; a++)
{
for (b = 0; b < 100; b++)
{
if (b > a)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
if (a != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
