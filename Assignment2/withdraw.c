#include <stdio.h>
#include "withdraw.h"

void withdraw(float *balance){
    printf("\n--------Withdraw--------");
    float tempBalance;
    printf("\nEnter the amount you wish to withdraw: ");
    if(scanf("%f", &tempBalance) != 1){
        printf("\nYou entered an invalid value");
        while(getchar() != '\n');
    }
    else{
        *balance -= tempBalance;
    }
}
