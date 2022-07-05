#include "main.h"
/**
 * main - function that prints print_alphabet in lowercase
 * description - print_alphabet prints lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
