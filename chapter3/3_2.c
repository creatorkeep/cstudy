#include <stdio.h>

int main(void)
{
    int itemNumber;
    float price;
    int day, month, year;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Enter date: ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("Item\tUnit\t\tPurchase\n");
    printf("    \tPrice\t\tDate\n");
    printf("%-4d\t$%7.2f\t%d/%d/%d", itemNumber, price, month, day, year);
    return 0;
}

