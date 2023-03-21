/**
* main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
*
* Return: Always 0.
*/
#include <stdio.h>
int main(void)
{
int i;
unsigned long int num1 = 0, num2 = 1, next;
for (i = 0; i < 50; i++)
{
if (i < 2)
next = i;
else
{
next = num1 + num2;
num1 = num2;
num2 = next;
}
printf("%lu", next);
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}

