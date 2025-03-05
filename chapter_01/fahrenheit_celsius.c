#include <stdio.h>

#define KZERO -273

int main() {
    for (int degC = -40; degC <= 50; degC += 7) {
        float degF = 9.0 / 5.0 * degC + 32.0;
        int   kelv = KZERO + degC;

        printf("Ce: %4d \t Fa: %6.1f \t Kel: %4d\n", degC, degF, kelv);
    }

    return 0;
}
