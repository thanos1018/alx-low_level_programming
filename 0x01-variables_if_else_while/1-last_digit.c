#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* This program assigns a random number to the variable n each time it is executed
* and prints the last digit of the number stored in the variable n.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0)); /* Seed rand function with current time */
n = rand() - RAND_MAX / 2; /* Generate a random number */
/* Print the last digit of n and some additional text based on its value */
printf("Last digit of %d is %d and is ", n, n % 10);
if (n % 10 > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}

