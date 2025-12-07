#include <stdio.h>
#include <stdbool.h>
#include "loginFile.c"

int main(){
    bool loggedIn;
    int pin;

    printf("Enter you pin: ");
    scanf("%d", &pin);

    loggedIn = login(pin);

    if(loggedIn){
        printf("You are logged in");
    }else{
        printf("Invalid pin");
    }
}
