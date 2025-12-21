#include <stdio.h>

int main() {
    int count = 10;
    int *pCount;

    pCount = &count;

    // Modify the value of count indirectly via the pointer
    *pCount = 25;

    printf("The updated value of count is: %d\n", count);

    return 0;
}