#include <stdio.h>
/**
*main - return
 *description: 'play'
 *Return: always 0
 */
int main(void)
{
int n;
int m;
for (n = 48; n <= 58; n++)
{
putchar(n);
n++;
}
for (m = 97; m <= 103; m++)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
