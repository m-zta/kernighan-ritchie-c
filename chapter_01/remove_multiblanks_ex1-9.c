#include <stdio.h>

int main() {
    int ch, prev_char = 0;

    printf("You can start typing stuff, I will repeat without unnecessary blanks.\n");

    while ((ch = getchar()) != EOF) {
        if (ch != ' ' || prev_char != ' ') {
            putchar(ch);
        }
        
        prev_char = ch;
    }

    return 0;
}
