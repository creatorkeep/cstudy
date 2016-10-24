#include <stdio.h>
int main(void)
{
	int a, b, mod, temp;
	int originA, originB;
	printf("Enter a / b ");
	scanf("%d / %d", &a, &b);
	originA = a;
	originB = b;
	if(a<b) {
		temp = a;
		a = b;
		b = temp;
	}
	while(b!=0) {
		mod = a % b;
		a = b;
		b = mod;
	}
	printf("The simplified number of %d / %d is %d / %d", originA, originB, originA/a, originB/a );
	return 0;
}
