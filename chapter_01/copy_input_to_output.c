#include <stdio.h>

int main() {
    int ch;

    printf("This is the echo program. Type anything, it will be repeated!\n");

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}
