#include <stdio.h>
int main(void)
{
    int input, result, counter;
    result = 0;
    counter = 1;
    printf("Enter a number between 0 to 32767: ");
    scanf("%d", &input);
    while (input>=8)
    {
        result += input % 8 * counter;
        counter *= 10;
        input /= 8;
    }
    result += input * counter;
    printf("The octal is: 0%d", result);
    return 0;
}
