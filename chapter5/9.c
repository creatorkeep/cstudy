#include <stdio.h>
int compare(int a1, int a2);
int main(void)
{
    int dd1, mm1, yyyy1, dd2, mm2, yyyy2;
    int result;
    printf("Enter date 1 ");
    scanf("%2d/%2d/%4d",&mm1, &dd1, &yyyy1);
    printf("Enter date 2");
    scanf("%2d/%2d/%4d",&mm2, &dd2, &yyyy2);
    if(compare(yyyy1, yyyy2) == 0)
    {
        if(compare(mm1, mm2)==0){
            if(compare(dd1, dd2)==0){
                result = compare(dd1, dd2);
            } else {
                result = compare(dd1, dd2);
            }
        } else {
            result = compare(mm1, mm2);
        }

    }
    else {
    result = compare(yyyy1, yyyy2);
    }
    printf("%d", result);
}

int compare(int a1, int a2)
{
    if(a1<a2){
        //printf("date 1 is ealier")
        return -1;
    } else if (a1 > a2){
       // printf("date 2 is ealier")
        return 1;
    } else {
        return 0;
    }

}
