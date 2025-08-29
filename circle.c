#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.1416;   

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;   

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
