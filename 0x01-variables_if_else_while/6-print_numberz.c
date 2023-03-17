/**
* main - Entry point
*
* Description: Prints all single digit numbers of base 10 starting from 0,
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
int num; /* Declare variable to hold the number to print */
num = 0; /* Initialize variable to start at 0 */
/* Loop through the numbers 0-9 and print each one using putchar */
while (num < 10)
{
putchar(num + '0'); /* Add '0' to convert integer to character */
num++; /* Increment the number */
}
putchar('\n'); /* Print a newline character to end the line */
return (0); /* Exit the program with success */
}

