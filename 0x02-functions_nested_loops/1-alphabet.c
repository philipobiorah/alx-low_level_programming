#include "main.h"
/**
 * print_alphabet  function
 * 
 */
void print_alphabet(void)
{
char i = 'a';
while(i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();

return (0);
}
