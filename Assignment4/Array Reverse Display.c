#include <stdio.h>

int main(){
    int arr[3] = {2,5,7};

    for(int i = sizeof(arr)/sizeof(int)-1; i >= 0; i--){
        printf("%d\n", arr[i]);

    }
    return 0;
}
