#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
*
* Return: Always 0.
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n'); /* Add a newline character to the end of the output */
return (0);
}



