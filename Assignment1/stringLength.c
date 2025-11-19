#include <stdio.h>
#include <string.h>

int main(void) {
    char name[200];

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    // Strip newline if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("Length of your name: %zu\n", len);

    return 0;
}
