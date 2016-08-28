#include <stdio.h>
/*computes dimensional weight of 12 * 10 * 8 box*/
int main(void)
{
    int height, length, width, volume, weight;
    height = 8;
    width = 10;
    length = 12;
    volume = width * height * length;
    weight = (volume + 165) / 166;
    printf("Dimensions %d*%d*%d\n", length, width, height);
    printf("Volume %d\n", volume);
    printf("Weight %d\n", weight);
    return 0;
}
