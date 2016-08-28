#include <stdio.h>

int main(void)
{
    int height, width, length;

    printf("Please enther height of the box: ");
    scanf("%d", &height); /* scanf auto gives a \n */
    printf("Please enter width of the box: ");
    scanf("%d", &width);
    printf("Please enter length of the box: ");
    scanf("%d", &length);

    printf("Volume = %d\n", height * width * length);
    printf("Weight = %d\n", ((height * width * length + 165) / 166));
    return 0;

}
