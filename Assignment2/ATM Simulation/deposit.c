#include <stdio.h>
#include "deposit.h"

void deposit(float *balance){
    printf("\n--------Deposit--------");
    float tempBalance;
    printf("\nEnter the amount you wish to deposit: ");
    if(scanf("%f", &tempBalance) != 1){
        printf("\nYou entered an invalid value");
        while(getchar() != '\n');
        return;
    }
    else if (tempBalance <= 0){
        printf("\nDeposit amount must be greater than zero.");
        return;
    }
    else{
        *balance += tempBalance;
        printf("\nDeposit successful. Amount deposited: $%.2f", tempBalance);
    }
}
