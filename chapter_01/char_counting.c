#include <stdio.h>

int main() {
    unsigned int count = 0;
    int ch;

    printf("This is the character counting program.\n");
    printf("Please enter a string: ");

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch != ' ') {
            count++;
        }
    }

    printf("count: %d", count);

    return 0;
}
