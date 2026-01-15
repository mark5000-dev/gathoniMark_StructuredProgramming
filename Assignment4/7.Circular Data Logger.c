#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;  // Where the next element goes
int count = 0; // Total elements currently in buffer

void insert(int val) {
    buffer[head] = val;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) count++;
}

void printBuffer() {
    printf("Chronological order: ");
    // The oldest element is at 'head' if the buffer is full
    int start = (count == BUFFER_SIZE) ? head : 0;
    for (int i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int val, choice;
    while(1) {
        printf("\n1. Insert 2. Print 3. Exit: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter value: ");
            scanf("%d", &val);
            insert(val);
        } else if(choice == 2) {
            printBuffer();
        } else break;
    }
    return 0;
}