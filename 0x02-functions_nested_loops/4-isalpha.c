#include "main.h"
/**
*_isalpha - alpha
*@c: print
*Return: 1 if the  character is a letter, 0 if not
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
