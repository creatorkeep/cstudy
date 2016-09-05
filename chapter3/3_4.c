#include <stdio.h>
int main(void)
{
    int num1, num2, num3;
    printf("Please enter your phone number (xxx)xxx-xxxx: ");
    scanf("(%d)%d-%d", &num1, &num2, &num3);
    printf("Your number is %d.%d.%d", num1, num2, num3);
    return 0;
}
