#include "main.h"
/**
 *_strlen - tag
 *@s: str
 *Return:
 */
int _strlen(char *s)
{
int longi = 0;
while(*s != '\0')
{
longi++;
s++;
}
return(longi);
}
