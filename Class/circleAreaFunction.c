#include <stdio.h>
#define PI 3.142

int circleArea(int radius){
    return PI * radius * radius;
}
int main(){
    float surfaceArea, radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    surfaceArea = circleArea(radius);

    printf("The surface area is %f", surfaceArea);


}
