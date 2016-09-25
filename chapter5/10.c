#include <stdio.h>
int main(void)
{
    int grade, result;
    printf("Enter grade: ");
    scanf("%d", &grade);
    result = grade / 10;

    switch(result)
    {
        case 10: case 9: printf("A"); break;
        case 8:  printf("B"); break;
        case 7:  printf("C"); break;
        case 6:  printf("D"); break;
        default:  printf("F"); break;
    }
    return 0;

}
