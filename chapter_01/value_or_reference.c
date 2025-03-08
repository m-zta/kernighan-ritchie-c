#include <stdio.h>

int pass_by_value(int number) {
    number++;
    return number;
}

// Input: Pointer to number
// Output: Number incremented by 1
int pass_by_reference(int* number) {
    printf("Pointer: %p\n", number);
    (*number)++;
    return *number;
}

int main() {
    int input1 = 0, input2 = 0;

    printf("input1 before: %d\n", input1);
    int val = pass_by_value(input1);
    printf("Returned by val: %d\n", val);
    printf("input1 now: %d\n", input1);
    printf("----------------------\n");
    printf("input2 before: %d\n", input2);
    int ref = pass_by_reference(&input2);
    printf("Returned by ref: %d\n", ref);
    printf("input2 now: %d\n", input2);

    return 0;
}