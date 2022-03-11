#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
char c, l;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (l = 'A'; l <= 'Z'; l++)
{
putchar(l);
}
printf("\n");
return (0);
}
