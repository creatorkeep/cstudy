#include <stdio.h>
int main(void)
{
	int input;
	int i;
	printf("Enter an integer: ");
	scanf("%d", &input);
	for(i=2; i*i<=input; i+=2){
		printf("%d\n", i*i);
	}
	return 0;
}
