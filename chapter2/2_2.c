/*Calculate ball volume*/
#include <stdio.h>
#define RATIO 4.0f/3.0f
#define PI 3.14f

int main(void)
{
    float radius, volume;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    volume = RATIO * PI * radius * radius * radius;
    printf("The volume of the ball is %.2f\n", volume);
    return 0;
}
