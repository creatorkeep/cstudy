#include <stdio.h>
int main(void)
{
    int input, counter, temp;
    counter = 0;
    printf("Give a number: ");
    scanf("%d", &input);
    temp = input;
    while(temp>0)
    {
        counter++;
        temp /= 10;
    }
    printf("The number %d has %d numbers", input, counter);
    return 0;
}
