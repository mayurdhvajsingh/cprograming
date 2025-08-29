#include <stdio.h>

int main() {
    float kilograms, grams;

    printf("Enter weight in Kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * 1000; 

    printf("Weight in Grams = %.2f\n", grams);

    return 0;
}
