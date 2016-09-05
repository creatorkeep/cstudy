#include <stdio.h>
int main(void)
{
    int d11, d12, d13, d14, d21, d22, d23, d24, d31, d32, d33, d34, d41, d42, d43, d44;
    int rowSum1, rowSum2, rowSum3, rowSum4;
    int colSum1, colSum2, colSum3, colSum4;
    printf("Enter 16 digits: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
     &d11, &d12, &d13, &d14, &d21, &d22, &d23, &d24, &d31, &d32, &d33, &d34, &d41, &d42, &d43, &d44);
     rowSum1 = d11 + d12 + d13 + d14;
     rowSum2 = d21 + d22 + d23 + d24;
     rowSum3 = d31 + d32 + d33 + d34;
     rowSum4 = d41 + d42 + d43 + d44;
     colSum1 = d11 + d21 + d31 + d41;
     colSum2 = d12 + d22 + d32 + d42;
     colSum3 = d13 + d23 + d33 + d43;
     colSum4 = d14 + d24 + d34 + d44;
    printf("Row sums: %d, %d, %d ,%d\n", rowSum1, rowSum2, rowSum3, rowSum4);
    printf("Column sums: %d, %d, %d ,%d\n", colSum1, colSum2, colSum3, colSum4);
    printf("Diagonal sums: %d, %d\n", d11 + d22 + d33 + d44, d14 + d23 + d32 + d41);
    return 0;

}
