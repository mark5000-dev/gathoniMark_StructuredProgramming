#include <stdio.h>

int main(){
    int arr[3] = {2,5,8};
    int sum;

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        sum += arr[i];
    }

    printf("Sum of the array: %d", sum);

    return 0;
}
