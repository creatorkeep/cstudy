#include <stdio.h>
int main(void)
{
    int input, hund, dec, sig, result;
    printf("Please enter a number from 100 - 999: ");
    scanf("%d", &input);
    hund = input / 100;
    dec = input / 10 % 10;
    sig = input % 10;
    result = sig * 100 + dec * 10 + hund;
    printf("The resversed number is %d\n", result);
    return 0;
}
