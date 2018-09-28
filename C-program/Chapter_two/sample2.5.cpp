#include <stdio.h>
#include <math.h>
int main()
{
	int w = 0, n, r;
	int i = 2; 
	scanf("%d", &n);
	if (n < 0 ) {
		printf("error!\n");
	} else {
		while (i <= (int)sqrt(n)){
		r = n % i;
		if (r == 0) {
			w = 1;
			break;
		} else {
			i = i + 1;
		}
	}
	if ( w == 0){
		printf("yes");
	} else printf("no");
	}
	return 0;
	
	
	
	
//	int n, r, w;
//	int i = 2;
//	scanf("%d", &n);
//	while ( i < n / 2){
//		r = n % i;
//		if (r == 0){
//			printf("no");
//			break;
//		}
//		
//		if (i >= sqrt(n)){
//			printf("yes");
//			break;
//		}
//		i++;
//	}
//	printf("yes");
//	return 0;
 } 
