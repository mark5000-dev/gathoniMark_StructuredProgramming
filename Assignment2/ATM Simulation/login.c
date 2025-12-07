#include <stdio.h>
#include <stdbool.h>
#include "login.h"

#define PIN 1234

bool login(void) {
    int pin,attempts = 0;

    while(attempts < 3){
        printf("Enter your pin: ");
        scanf("%d", &pin);

        if(pin == PIN){
            return true;
        }
        else{
            printf("Incorrect PIN. Please try again.\n");
            attempts++;
        }
    }
    printf("Too many incorrect attempts. Exiting...\n");
    return false;
}
