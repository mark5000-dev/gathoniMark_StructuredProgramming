#include <stdio.h>
#include "deposit.h"

void deposit(float *balance){
    printf("\n--------Deposit--------");
    float tempBalance;
    printf("\nEnter the amount you wish to deposit: ");
    if(scanf("%f", &tempBalance) != 1){
        printf("\nYou entered an invalid value");
        while(getchar() != '\n');
    }
    else{
        *balance += tempBalance;
    }
}
