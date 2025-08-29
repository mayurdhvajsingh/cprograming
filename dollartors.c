#include <stdio.h>

int main() {
    float dollar, rupees;

    printf("Enter amount in Dollar: ");
    scanf("%f", &dollar);

    rupees = dollar * 48;

    printf("Amount in Rupees = %.2f\n", rupees);

    return 0;
}
