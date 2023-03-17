/*
* main - entry point
*
* Description: This program prints the alphabet in lowercase, followed by a new line. It then prints all the letters except 'q' and 'e', using the putchar function twice.
*
* Return: Always 0 (success)
*/
int main(void)
{
char c;
/* Print the alphabet in lowercase */
for (c = 'a'; c <= 'z'; c++)
putchar(c);
/* Print all the letters except 'q' and 'e' */
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'e' || c == 'q')
continue;
putchar(c);
}
putchar('\n');
return (0);
}

