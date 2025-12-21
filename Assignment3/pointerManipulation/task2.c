#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);

    //use of (void*) cast is o ensure compatibility with the printf variadic function according to the ISO C standard.
    printf("value stored in ptr(address of num): %p\n", (void*) ptr);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value via pointer: %d\n", *ptr);

}
