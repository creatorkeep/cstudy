#include <stdio.h>
int main(void)
{
	int i, n, odd, square;
	printf("This program is for displaying table of squares ");
	printf("Enter number of entries: ");
	scanf("%d", &n);
	i = 1;
	odd = 3;
	for(square=1; i<=n; odd+=2) {
		printf("%10d%10d\n", i, square);
		++i;
		square += odd;
	}

	return 0;

}
