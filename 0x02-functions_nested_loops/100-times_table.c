#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
*
* @n: the number of times to print the times table
*
* Return: void
*/
void print_times_table(int n)
{
if (n > 15 || n < 0) // check if n is within the valid range
return;
for (int i = 0; i <= n; i++) {
for (int j = 0; j <= n; j++) {
printf("%d\t", i * j); // print the product of i and j
}
printf("\n"); // move to the next line after printing the row
}
}

