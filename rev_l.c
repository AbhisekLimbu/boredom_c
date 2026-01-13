#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return 1;
    }

    char *s = argv[1];
    char *p = s;

    while (*p != '\0') p++;   // go to end
    if (p == s) return 0;     // empty string
    p--;                      // last char

    while (p >= s) {
        putchar(*p);
        p--;
    }
    putchar('\n');
    return 0;
}
