#include "main.h"
/**
*print_alphabet_x10 - function to print
*description: "print"
*Return always 0
*/
void print_alphabet_x10(void)
{
char la;
int ten;
for (ten = 0; ten <= 9; ten++)
{
for (la = 'a'; la <= 'z'; la++)
_putchar(la);
_putchar('\n');
}
}
