#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * using the write function
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
    ssize_t len = sizeof("and that piece of art is useful" - 1);

    /* write to the standard error */
    write(STDERR_FILENO, "and that piece of art is useful\n", len);

    return (1);
}



