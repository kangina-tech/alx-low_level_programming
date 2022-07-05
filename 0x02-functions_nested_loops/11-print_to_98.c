#include "main.h"
/**
 * print_to_98 - print numbers from u to 98
 * @n: integer argument
 * Return: 0 or 1
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
printf("%d", n);
printf("\n");
}
