# include <stdio.h>
int main() 
{
	float f, c;
	scanf("%f", &f);
	c = (5.0 / 9) * (f - 32);  		// 5.0,Ҫ��Ȼ����� 
	printf("���ϣ�%.6f\n���ϣ�%6.6f\n", f,c);
	return 0;
}
