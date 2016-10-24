#include <stdio.h>
int main(void)
{
	int i, n;
	printf("This program is for displaying table of squares ");
	printf("Enter number of entries: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		printf("%10d%10d\n", i, i*i);
	}

	return 0;

}
