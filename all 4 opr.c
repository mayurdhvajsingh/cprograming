#include <stdio.h>

int main() {
    int a = 20;   
    int b = 5;    

    int sum, difference, product;
    float division;

    sum = a + b;          
    difference = a - b;   
    product = a * b;      
    division = (float)a / b; 

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", difference);
    printf("Multiplication = %d\n", product);
    printf("Division = %.2f\n", division);

    return 0;
}
