#include "main.h"
/**
 * print_alphabet_x10  - This prints the alphabet a - z
 */
void print_alphabet_x10(void)
{
int count;
for (count = 0; count < 10; count++)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
}
