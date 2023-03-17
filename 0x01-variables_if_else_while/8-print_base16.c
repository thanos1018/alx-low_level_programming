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
int i;
char c;
for (i = 0; i < 10; i++) {
c = i + '0';
putchar(c);
}
for (i = 0; i < 6; i++) {
c = i + 'a';
putchar(c);
}
putchar('\n');
return (0);
}







