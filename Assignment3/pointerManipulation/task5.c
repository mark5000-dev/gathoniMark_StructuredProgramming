#include <stdio.h>

// This functions uses pointer of pointer to swap two integers
void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}