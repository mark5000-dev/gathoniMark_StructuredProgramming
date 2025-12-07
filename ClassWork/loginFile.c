#include <stdbool.h>
#define PIN 2467

extern bool login(int pin){
    if(pin == PIN){
        return true;
    }
    else{
        return false;
    }
}

extern void checkBalance(float balance){
 printf("Your balance is: %.2f", balance);

}
