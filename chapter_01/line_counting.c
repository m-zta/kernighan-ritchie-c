#include <stdio.h>

int main() {
    int ch, count;

    count = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
