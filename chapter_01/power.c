#include <stdio.h>

#define N 10

int power(int base, int exponent) {
    if (exponent < 0) {
        printf("Exponent can not be smaller than 0");
    }

    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int bases[N]     = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int exponents[N] = {3, 5, 1, 0, 4, 3, 2, 1, 2, 3};

    for (unsigned int i = 0; i < N; i++) {
        int base     = bases[i];
        int exponent = exponents[i];
        int result   = power(base, exponent);

        printf("%d^(%d) = %d\n", base, exponent, result);
    }

    return 0;
}