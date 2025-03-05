#include <stdio.h>

int main() {
    int ch, ignore_blank = 1;

    while ((ch = getchar()) != EOF) {
        if (ch != ' ') {
            ignore_blank = 0;
            putchar(ch);
        } else {
            if (ignore_blank) {
                continue;
            } else {
                putchar(ch);
                ignore_blank = 1;
            }
        }
    }

    return 0;
}
