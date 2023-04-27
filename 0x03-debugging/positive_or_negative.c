#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative - A file to check
 *@i: integer
 *description: 'check if negative or positive'
 *Return: always 0
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
