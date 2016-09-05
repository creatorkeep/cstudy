#include <stdio.h>
int main(void)
{
    int gs1, groupId, publisher, itemNumber, checkDigit;
    printf("please enter the ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gs1, &groupId, &publisher, &itemNumber, &checkDigit);
    printf("GS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", groupId);
    printf("Publisher: %d\n", publisher);
    printf("Item number: %d\n", itemNumber);
    printf("Check Digit: %d\n", checkDigit);
    return 0;
}
