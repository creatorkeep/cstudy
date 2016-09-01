/*Count price with 5% tax*/
#include <stdio.h>
#define TAX_RATE 0.05
int main(void)
{
    float price, total;
    printf("Please enter the price: ");
    scanf("%f", &price);
    total = price * (1 + TAX_RATE);
    printf("Total price is %.2f.\n", total);
    return 0;
}
