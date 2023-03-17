#include <stdio.h>
/**
* main - Prints the lowercase alphabet in reverse, followed by a new line, using only putchar function twice.
*
* Return: Always 0.
*/
int main(void)
{
char letter = 'z'; // start with the letter 'z'
while (letter >= 'a') // iterate through the alphabet in reverse order
{
putchar(letter); // print the current letter
letter--; // move to the previous letter
}
putchar('\n'); // print a newline character
return (0);
}

