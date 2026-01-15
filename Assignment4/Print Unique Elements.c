#include <stdio.h>

int main() {
    int n, count;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are: ");
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            // Check if element exists elsewhere in the array
            if(i != j && arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 0) printf("%d ", arr[i]);
    }
    return 0;
}