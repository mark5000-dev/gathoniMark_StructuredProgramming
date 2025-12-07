#include <stdio.h>
#include <stdbool.h>
#include "login.h"
#include "checkBalance.h"
#include "deposit.h"
#include "withdraw.h"

void menu(void);
bool input(int*);
void pauseScreen(void);

int main()
{
    float balance = 100000.00;
    bool end = false, loggedIn;
    int choice;

    printf("======== Consolidated Bank ATM ========\n");
    loggedIn = login();

    while (loggedIn && !end) {
        while(1){ //Ensure correct input is taken
            menu();
            if(input(&choice)){
                break;
            }
        }

        switch(choice){
        case 1:
            checkBalance(balance);
            pauseScreen();
            break;
        case 2:
            deposit(&balance);
            checkBalance(balance);
            pauseScreen();
            break;
        case 3:
            withdraw(&balance);
            checkBalance(balance);
            pauseScreen();
            break;
        case 0:
            end = true;
        }

}

    return 0;
}

//Define the functions declared above the main function:
//
void menu(){
    printf("\033[2J\033[H");
    printf("======== Consolidated Bank ATM ========\n");
    printf("These are the Services Available:\n \
            1.Check Balance\n \
            2.Deposit\n \
            3.Withdrawal\n \
            0.Exit\n \
             Choose Your desired service: ");
}
bool input(int *choice){
    if(scanf("%d",choice) != 1){
        printf("Invalid Input.Enter a number.\n");
        while(getchar() != '\n');
        pauseScreen();
        return false;
    }

    if(*choice < 0 || *choice > 3){
        printf("Choice must be between 0 and 3.\n");
        pauseScreen();
        return false;
    }

    return true;
}

void pauseScreen(void){
    printf("\nPress Enter to continue...");
    while(getchar() != '\n');
    getchar();

}
