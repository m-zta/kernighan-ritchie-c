#include <stdio.h>

int main() {
    int ch, blanks = 0, tabs = 0, newlines = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            blanks++;
        } else if (ch == '\t') {
            tabs++;
        } else if (ch == '\n') {
            newlines++;
        }
    }

    printf("---------------\n");
    printf("Blanks: %d \nTabs: %d \nNew lines: %d", blanks, tabs, newlines);

    return 0;
}
