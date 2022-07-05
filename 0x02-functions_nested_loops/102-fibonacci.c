#include <stdio.h>
/**
 * main - print first fibonacci numbers
 * Return: 0
 */
int main(void)
{
int i = 0;
long int a = 0, b = 1, next;
while (i < 50)
{
next = a + b;
a = b;
b = next;
printf("%lu", next);
if (i < 49)
{
printf(',');
}
i++;
}
printf("\n");
return (0);
}
