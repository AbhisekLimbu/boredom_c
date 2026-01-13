#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(const char *s) {
    // find end (points at '\0')
    const char *end = s;
    while (*end != '\0') {
        end++;
    }

    // empty string is palindrome
    if (end == s) return true;

    // last real character
    end--;

    // compare from both ends
    while (s < end) {
        if (*s != *end) {
            return false;
        }
        s++;
        end--;
    }
    return true;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return 1;
    }

    const char *ptr = argv[1];

    if (is_palindrome(ptr)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
