#include <stdio.h>
int main(void)
{
    int day, month, year;
    printf("Please enter date mm/dd/yyyy: ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("The date you entered is %d%d%d.\n", year, month, day);
    return 0;
}
