#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
    const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const size_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

    /* Write the message to the standard error */
    ssize_t count = write(STDERR_FILENO, msg, len);

    /* Check if the write operation was successful */
    if (count != (ssize_t)len)
    {
        return 1;
    }

    return 1;
}



