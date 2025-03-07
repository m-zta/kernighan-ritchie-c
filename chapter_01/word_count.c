#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {
    int last_char, line_count, word_count, char_count, state;

    state      = OUT;
    line_count = word_count = char_count = 0;

    printf("Type any text, I count characters, words and lines!\n");

    while ((last_char = getchar()) != EOF) {
        if (!(last_char == ' ' || last_char == '\t' || last_char == '\n')) {
            char_count++;
            if (state == OUT) {
                word_count++;
                state = IN;
            }
        } else {
            state = OUT;
        }

        if (last_char == '\n') {
            line_count++;
        }
    }

    if (char_count > 0 && last_char != '\n' && last_char != EOF) {
        printf("Last character: ");
        putchar(last_char);
        printf("\n");
        line_count++;
    }

    printf("\n-----------------\n");
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", line_count, word_count,
           char_count);
}
