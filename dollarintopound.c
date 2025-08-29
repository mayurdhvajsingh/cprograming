#include <stdio.h>

int main() {
    float dollars, rupees, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;

    pounds = rupees / 70;

    printf("%.2f Dollars = %.2f Pounds\n", dollars, pounds);

    return 0;
}
