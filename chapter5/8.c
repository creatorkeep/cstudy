#include <stdio.h>

int convertTime(int hour, int minute, char ap);
int getArray();

int main(void)
{
    int hour, minute, test;
    int a[8];
    int i;
    int min = 99999;
    int minpos;
    int diff;
    char ap;
    printf("enter time: ");
    scanf("%d:%d %char", &hour, &minute, &ap);
    test = convertTime(hour, minute, ap);
    printf("result %d\n", test);
    a[0] = convertTime(8,00,'a');
    a[1] = convertTime(9, 43, 'a');
    a[2] = convertTime(11, 19, 'a');
    a[3] = convertTime(12, 47, 'p');
    a[4] = convertTime(2, 00, 'p');
    a[5] = convertTime(3, 45, 'p');
    a[6] = convertTime(7, 00, 'p');
    a[7] = convertTime(9, 45, 'p');

    for(i=0; i<8; i++)
    {
        diff = test - a[i];
        if(diff<0){
            diff = -diff;
        }
        if(diff < min)
        {
            printf("%d\n", diff);
            min = diff;
            minpos = i;
        }
    }
    printf("No. %d is your choice (0-7)", minpos - 1);
}

int convertTime(int hour, int minute, char ap)
{
    int result = 0;

    switch(ap)
    {
        case 'a': result = hour *60 + minute; break;
        case 'p': result = (12 + hour) *60 + minute; break;
    }
    return result;
}



