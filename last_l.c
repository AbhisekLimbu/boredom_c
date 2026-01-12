#include <stdio.h>
#include <stdlib.h>

void print_first_n_lines(FILE *fp, int n) {
    int c;
    int lines = 0;

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);

        if (c == '\n') {
            lines++;
            if (lines >= n) {
                return; // stop printing, return to main
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    print_first_n_lines(fp, 10);

    fclose(fp);
    return 0;
}
