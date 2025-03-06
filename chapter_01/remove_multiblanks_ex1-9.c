#include <stdio.h>

int main() {
    int ch, prev_char = 0;

    printf("Okay, you can start typing stuff, I will repeat without unnecessary blanks.\n");

    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            if (prev_char != ' ') {
                putchar(ch);
            } else {
                // Do nothing
            }
        } else {
            putchar(ch);
        }
        
        prev_char = ch;
    }

    return 0;
}
