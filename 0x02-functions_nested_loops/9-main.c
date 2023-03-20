#include "main.h"
/**
* times_table - prints the 9 times table
*/
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++) {
for (j = 0; j <= 9; j++) {
result = i * j;
if (result > 9) {
/* If result is 2 digit, print with space */
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
} else {
/* If result is 1 digit, print with spaces */
if (j != 0) {
_putchar(' ');
}
_putchar(result + '0');
}
if (j != 9) {
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
times_table();
return (0);
}

