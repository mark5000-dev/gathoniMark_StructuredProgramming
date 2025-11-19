#include <stdio.h>
#include <stdbool.h>

// Simple calculator program
int main(void) {
    int numberA = 0, numberB = 0, result = 0, operation = -1;
    const char *operationName = NULL;
    bool operationTaken = false;
    bool invalidInput = false; // A
    bool exitedProgram = false;

    // Read A
    printf("Enter number A: ");
    if (scanf("%d", &numberA) != 1) {
        printf("Invalid input for number A\n");
        return 1;
    }

    // Read B
    printf("Enter number B: ");
    if (scanf("%d", &numberB) != 1) {
        printf("Invalid input for number B\n");
        return 1;
    }

    printf("Choose the type of operation to perform:\n");
    printf(" Press 1 for Addition.\n Press 2 for Subtraction.\n Press 3 for Multiplication.\n Press 4 for Division.\n Press 0 to exit.\n");

    while (!operationTaken) {
        if (invalidInput) {
            printf("Your input was invalid. Try again.\n");
            invalidInput = false;
        }
        printf("Enter Input: ");
        if (scanf("%d", &operation) != 1) {
            printf("Invalid input. Expecting a number.\n");
            return 1;
        }

        switch (operation) {
            case 1:
                result = numberA + numberB;
                operationName = "addition";
                operationTaken = true;
                break;
            case 2:
                result = numberA - numberB;
                operationName = "subtraction";
                operationTaken = true;
                break;
            case 3:
                result = numberA * numberB;
                operationName = "multiplication";
                operationTaken = true;
                break;
            case 4:
                if (numberB == 0) {
                    printf("Cannot divide by zero. Choose another operation or change B.\n");
                    invalidInput = true;
                } else {
                    result = numberA / numberB; /* integer division */
                    operationName = "division";
                    operationTaken = true;
                }
                break;
            case 0:
                printf("Exiting the program...\n");
                exitedProgram = true;
                operationTaken = true;
                break;
            default:
                invalidInput = true;
                break;
        }
    }

    if (!exitedProgram) {
        printf("The result for your %s is: %d\n", operationName, result);
    }

    return 0;
}
