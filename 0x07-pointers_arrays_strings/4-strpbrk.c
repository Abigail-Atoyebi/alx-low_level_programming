#include "main.h"
/**
 *_strpbrk -  brk
 *@s: s
 *@accept: star
 *Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
