#include <stdio.h>
#define SIZE 4
int main(void)
{
    int a[4];
    int i;
    int min = 9999;
    int max = -9999;
    printf("Please enter 4 numbers: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i<SIZE; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    printf("max is %d\n", max);
    printf("min is %d\n", min);
    return 0;
}
