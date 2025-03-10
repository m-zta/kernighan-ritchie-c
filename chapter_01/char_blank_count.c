#include <stdio.h>

int main() {
    int          ch;
    unsigned int blank_count     = 0;
    unsigned int other_count     = 0;
    unsigned int digit_count[10] = {0};

    printf("Count blanks (' ', '\\t', '\\n'), digits (0-9) and other "
           "characters:\n");

    while ((ch = getchar()) != EOF) {
        if ('0' <= ch && ch <= '9') {
            unsigned int index = ch - '0';
            digit_count[index]++;
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            blank_count++;
        } else {
            other_count++;
        }
    }

    printf("\n-------------------\n");
    printf("Blanks: %d\n", blank_count);

    for (int i = 0; i < 10; i++) {
        printf("Digit '%d': %d\n", i, digit_count[i]);
    }

    printf("Others: %d", other_count);

    return 0;
}