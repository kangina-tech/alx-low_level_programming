#include "main.h"

/**
 * leet - function that encode a string
 * @str:string that will be encoded
 * Return:returns encoded string
 */

char *leet(char *str)
{
int i = 0, k;
char s[] = "aAeEoOtTlL";
char s1[] = "4433007711";
for (; str[i] != '\0'; i++)
{
for (k = 0; k <= 9; k++)
{
if (s[k] == str[i])
{
str[i] = s1[k];
}
}
}
return (str);
}
