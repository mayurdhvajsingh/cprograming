#include <stdio.h>

int main() {
    float grams, kilograms;

    printf("Enter weight in Grams: ");
    scanf("%f", &grams);

    kilograms = grams / 1000;  

    printf("Weight in Kilograms = %.3f\n", kilograms);

    return 0;
}
