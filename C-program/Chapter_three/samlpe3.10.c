/*
 * ��3.10 ��д��3.3����ʹ֮�����������κδ�д��ĸ������ת��ΪСд��ĸ��Ȼ����putchar���������УСд��ĸ��
*/
# include <stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	return 0;
}