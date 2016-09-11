#include <stdio.h>
int main(void)
{
    int input, d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, checksum, total;
    int first;
    int second;
    printf("Enter a 11 digit number: ");
    scanf("%d", &input);
     d = input / 10000000000;
    i1 = input / 1000000000 % 10;
    i2 = input / 100000000 % 10;
    i3 = input / 10000000 % 10;
    i4 = input / 1000000 % 10;
    i5 = input / 100000 % 10;
    j1 = input / 10000 % 10;
    j2 = input / 1000 % 10;
    j3 = input / 100 % 10;
    j4 = input / 10 %10 ;
    j5 = input % 10;

    first = d + i2 + i4 + j1 + j3 + j5;
    second =  i1 + i3 + i5 + j2 + j4;
    total = 3 * first + second;
    checksum = 9 - ((total - 1) % 10);
    printf("Checksum is %d", checksum);
    return 0;
}
