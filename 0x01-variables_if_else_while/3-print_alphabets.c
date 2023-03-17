/*
* main - Entry point
*
* Description: Prints alphabet in lowercase and then uppercase
* using only putchar function
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}

