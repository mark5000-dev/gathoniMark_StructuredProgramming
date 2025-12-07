#include <stdio.h>
#include "withdraw.h"

void withdraw(float *balance){
    printf("\n--------Withdraw--------");
    float tempBalance;
    printf("\nEnter the amount you wish to withdraw: ");
    if(scanf("%f", &tempBalance) != 1){
        printf("\nYou entered an invalid value");
        while(getchar() != '\n');
        return;
    }

    else if(tempBalance > *balance){
        printf("\nInsufficient funds. Your current balance is: $%.2f", *balance);
        return;
    }
    else if(tempBalance <= 0){
        printf("\nWithdrawal amount must be greater than zero.");
        return;
    }
    else{
        *balance -= tempBalance;
        printf("\nWithrawal successful. Amout withdrawn: $%.2f", tempBalance);
    }
}

