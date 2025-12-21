#include <stdio.h>

int main() {
    int num1 = 15, num2 = 30;
    int *ptr1, *ptr2;
    int sum;

    ptr1 = &num1;
    ptr2 = &num2;

    // Performing addition through dereferenced pointers
    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}