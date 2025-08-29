#include <stdio.h>

int main() {
    float sales, discount, net_sales;

    printf("Enter Sales Amount: ");
    scanf("%f", &sales);

    discount = 0.10 * sales;

    net_sales = sales - discount;

    printf("Net Sales = %.2f\n", net_sales);

    return 0;
}
