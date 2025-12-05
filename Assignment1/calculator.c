// A simple Calculator to work with 2 numbers only
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}

int main(){
    int a = 0,b = 0,result = 0;
    char operation[10], key[2];
    bool exit = false, inputsTaken = false;

    while(!exit){
        printf("------Simple Calculator Program------\n");

        while(!inputsTaken){

            printf("Enter the first number: ");
            if (scanf("%d", &a) != 1) {
                printf("Invalid Input\n");
                // flush invalid chars
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;   // restart inputsTaken loop
            }

            printf("Enter the second number: ");
            if (scanf("%d", &b) != 1) {
                printf("Invalid Input\n");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;
            }
            inputsTaken = true;
        }

        printf("---Choose Operation---\n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n Choice : ");
        scanf("%s",operation);


        if (strcmp(operation, "1") == 0) {
            result = add(a, b);
        } else if (strcmp(operation, "2") == 0) {
            result = subtract(a, b);
        } else if (strcmp(operation, "3") == 0) {
            result = multiply(a, b);
        } else if (strcmp(operation, "4") == 0) {
            if(b==0){
                printf("Zero division error");
            }else{
                result = divide(a, b);
            }
        } else {
            printf("\nInvalid choice");
        }

        if (result){
            printf("\nThe result for your operation is : %d", result);
        }


        printf("\nPress 0 to exit and any key to continue: ");
        scanf("%s",key);
        if(strcmp(key,"0") == 0){
            exit = true;
        }else{
            exit = false;
            result = 0;
            inputsTaken = false;
            printf("\033[2J\033[H"); //Clear the terminal and place the cursor at the top left
        }
    }
}
