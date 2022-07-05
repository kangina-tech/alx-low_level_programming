#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lowercase of uppercase, 0 if not alphabet charater
 */
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
