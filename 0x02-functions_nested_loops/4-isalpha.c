#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks is a character is alphabeth
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isalpha(int c)
{
if ((c >= 'A'  && c <= 'Z') || (c >= 'a'  && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
