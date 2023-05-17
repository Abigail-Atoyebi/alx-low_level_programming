#include "main.h"
#include <stdio.h>
/**
 *main - print
 *@argc: a
 *@argv: b
 *Return: always 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
