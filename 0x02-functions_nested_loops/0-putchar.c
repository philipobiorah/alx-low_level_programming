#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
unsigned int i;
for (i = 0; i < sizeof(c); i++)
{
_putchar(c[i]);
}
_putchar('\n');

return (0);
}
