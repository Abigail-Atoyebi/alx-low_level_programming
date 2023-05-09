#include "main.h"
/**
 *_memcpy - mem
 *@dest: start
*@src: stop
 *@n: integer
*Return: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
