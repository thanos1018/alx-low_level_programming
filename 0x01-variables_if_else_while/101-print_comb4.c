#include <stdio.h>
/**
* main - prints all possible different combinations of three digits.
* Numbers must be separated by ,, followed by a space.
* The three digits must be different.
* 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2.
* Print only the smallest combination of three digits.
* Numbers should be printed in ascending order, with three digits.
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
* You can only use putchar six times maximum in your code.
* You are not allowed to use any variable of type char.
* All your code should be in the main function.
*
* Return: 0 on success.
*/
int main(void)
{
int i, j, k;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i % 3 + '0');
putchar(j % 3 + '0');
putchar(k % 3 + '0');
if (i == 0 && j == 1 && k == 2)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

