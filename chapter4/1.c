#include <stdio.h>
int main(void)
{
    int input, dec, sig, result;
    printf("Enter a number from 10 to 99: ");
    scanf("%d", &input);
    dec = input / 10;
    sig = input % 10;
    result = sig * 10 + dec;
    printf("The output is %d\n", result);
    return 0;
}
