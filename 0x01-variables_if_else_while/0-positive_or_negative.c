#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
int n;
srand(time(0)); /* Seed the random number generator */
n = rand() - RAND_MAX / 2; /* Generate a random number and assign it to n */
printf("%d ", n); /* Print the value of n */
if (n > 0)
{
printf("is positive\n"); /* If n is positive, print "is positive" */
}
else if (n == 0)
{
printf("is zero\n"); /* If n is zero, print "is zero" */
}
else
{
printf("is negative\n"); /* If n is negative, print "is negative" */
}
 return (0);
}

