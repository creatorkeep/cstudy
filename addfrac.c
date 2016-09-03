#include <stdio.h>

int findGCD();
int main(void)
{
    int num1, denum1, num2, denum2, result_num, result_denum;
    int gcd;
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denum1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denum2);
    result_num = num1 * denum2 + num2 * denum1;
    result_denum = denum1 * denum2;
    // euclid
    gcd = findGCD(result_num, result_denum);
    printf("The result is %d/%d", result_num/gcd, result_denum/gcd);
    return 0;
}


// do the fraction here
int findGCD(int a, int b)
{
    int temp;
    // makesure the first arg is larger
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a % b != 0){
        // recursion until b = 0
        findGCD(b, a % b);
    } else {
        return b;
    }
}
