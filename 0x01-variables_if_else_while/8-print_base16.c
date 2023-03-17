#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all numbers of base 16 in lowercase, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
char c;
for (num = 0; num < 10; num++)
{
c = num + '0';
putchar(c);
}
for (num = 0; num < 6; num++)
{
c = num + 'a';
putchar(c);
}
putchar('\n');
return (0);
}

