#include <stdio.h>
int main(void)
{
	int a, b, mod, temp;
	printf("Enter integer 1 ");
	scanf("%d", &a);
	printf("Enter integer 2 ");
	scanf("%d", &b);
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
	printf("The GCD is %d", a );
	return 0;
}
