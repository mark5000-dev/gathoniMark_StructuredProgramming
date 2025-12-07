#include <stdio.h>
#include <stdbool.h>
#include "login.h"

#define PIN 123456789

bool login(void) {
    int pin;

    printf("Enter your pin: ");
    scanf("%d", &pin);

    return pin == PIN;
}
