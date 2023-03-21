#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the n times table, starting with 0
*
* @n: the number of times to print the times table
*
* Return: void
*/
void print_times_table(int n)
{
int i, j;
if (n > 15 || n < 0) {
return;
}
for (i = 0; i <= n; i++) {
for (j = 0; j <= n; j++) {
printf("%d\t", i * j); /* print the product of i and j */
}
printf("\n"); /* move to the next line after printing the row */
}
}
/**
* main - entry point
*
* Return: 0 on success
*/
int main(void)
{
print_times_table(2);
return 0;
}



