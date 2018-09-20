# include <stdio.h>
# include <string.h>
int main ()
{
	int a, b, c, max;
	puts("Please enter :");
	scanf("%d, %d, %d",&a, &b, &c);
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("%d\n", max);
	return 0;
}
