#include <stdio.h>

int main() {
    int n, pos, value;
    printf("Input the size of array : ");
    scanf("%d", &n);
    int arr[n + 1]; // Size n+1 to accommodate the new element

    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the Position : ");
    scanf("%d", &pos);

    // Shift elements to the right
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;

    printf("After Insert the element the new list is : ");
    for(int i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}