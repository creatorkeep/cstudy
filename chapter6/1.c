#include <stdio.h>
int main(void)
{
	float input, max;
	max = 0;
	do{
		printf("Enter a number: ");
		scanf("%f", &input);
		if(input>max)
		{
			max = input;
		}
	} while(input>0);

	if(max>=0)
	{
		printf("The biggest number is %.2f", max);
	}
	else {
		printf("There is no non-negative input");
	}
	return 0;
}
