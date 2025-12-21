#include <stdio.h>

void incrementByValue(int n) {
    n++;
}

void incrementByReference(int *n) {
    (*n)++;
}

int main() {
    int val = 100;

    printf("Original value: %d\n", val);

    // Testing Pass by Value
    incrementByValue(val);
    printf("After incrementByValue: %d\n", val);

    // Testing Pass by Reference
    incrementByReference(&val);
    printf("After incrementByReference: %d\n", val);

    return 0;
}