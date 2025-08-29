#include <stdio.h>

int main() {
    float rupees, dollar;
    float rate = 83.0;

    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollar = rupees / rate;

    printf("Amount in Dollars = %.2f\n", dollar);

    return 0;
}
