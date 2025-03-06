#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main() {
    int ch, new_line, new_word, new_char, state;

    state = OUT;
    new_line = new_word = new_char = 0;

    while ((ch = getchar()) != EOF) {
        ++new_char;

        if (ch == '\n') {
            ++new_line;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++new_word;
        }
    }

    printf("-----------------\n");
    printf("Lines:%d\nWords: %d\nCharacters: %d\n", new_line, new_word, new_char);
}
