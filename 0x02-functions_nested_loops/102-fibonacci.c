#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers, starting with 1 and 2, separated by a comma followed by a space.
*
* Return: Always 0
*/
int main(void)
{
int i;
long int first = 1, second = 2, next;
printf("%ld, %ld", first, second);
for (i = 2; i < 50; i++)
{
next = first + second;
printf(", %ld", next);
first = second;
second = next;
}
printf("\n");
return (0);
}



