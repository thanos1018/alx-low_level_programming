#include <unistd.h>
#define STDERR_FILENO 2

int main(void) {
  char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  ssize_t length = sizeof(message) - 1;
  if (write(STDERR_FILENO, message, length) != length) {
    return 1;
  }
  return 1;
}



