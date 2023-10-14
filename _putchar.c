/* _putchar.c */

#include <unistd.h>

/* Custom _putchar function */
int _putchar(char c) {
    return write(1, &c, 1);
}

