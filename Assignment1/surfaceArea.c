#include <stdio.h>
#define M_PI 3.14159265358979323846

int main(void) {
    double r;
    printf("Enter radius: ");

    // check for invalid input
    if (scanf("%lf", &r) != 1 || r <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    double area = 4.0 * M_PI * r * r;
    printf("Surface area: %.6f\n", area);

    return 0;
}
