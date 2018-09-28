# include <stdio.h>
int main() 
{
	float f, c;
	scanf("%f", &f);
	c = (5.0 / 9) * (f - 32);  		// 5.0,要不然会出错 
	printf("华氏：%.6f\n摄氏：%6.6f\n", f,c);
	return 0;
}
