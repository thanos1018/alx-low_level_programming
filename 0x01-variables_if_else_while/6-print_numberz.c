/**
* main - Entry point
*
* Description: Prints all single digit numbers of base 10 starting from 0
* using only putchar function and avoiding use of char data type.
*
* Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar(num + '0');
putchar('\n');
return (0);
}


