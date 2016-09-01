#include <stdio.h>

int main(void)
{
    int total, num_twenty, num_ten, num_five, num_one;
    printf("enter total amount: ");
    scanf("%d", &total);
    num_twenty = total / 20;
    num_ten = total % 20 / 10;
    num_five = total % 10 / 5;
    num_one = total % 5;

    printf("twenty: %d\n", num_twenty);
    printf("ten: %d\n", num_ten);
    printf("five: %d\n", num_five);
    printf("one: %d\n", num_one);

    return 0;

}
