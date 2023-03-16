#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = 0;

    /* Calculate the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Write the string to the standard error */
    write(2, str, len);

    return (1);
}



