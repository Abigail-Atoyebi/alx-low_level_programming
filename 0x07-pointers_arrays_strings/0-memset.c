#include "main.h"
/**
 *_memset - set
 *@s: s
 *@b: b
 *@n: n
 *Return: change
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
