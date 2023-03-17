#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* This program assigns a random number to the variable n each time it is executed.
* It then prints the last digit of the number stored in the variable n.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
/* initialize random seed */
srand(time(0));
/* generate random number and assign it to n */
n = rand();
/* get the last digit of n */
int last_digit = n % 10;
printf("Last digit of %d is ", n);
/* check the last digit of n and print appropriate message */
if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
return (0);
}


