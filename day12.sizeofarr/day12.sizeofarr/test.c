#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//sizeof+������ ��ʾ�����������С
	printf("%d\n", sizeof(a[0][0]));//���һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0]));//���һ��Ԫ�ش�СΪ4*4=16���ֽ�
	printf("%d\n", sizeof(a[0]+1));//ֻҪ���������ǵ�������sizeof��,�ͻή����
	                               //���ﱾλ�ڶ���Ԫ�صĵ�ַ��
 	                               //����Ϊ�ڶ�����Ԫ�ص�ַ
	printf("%d\n", sizeof(a+1));//����Ϊ�ڶ��е���Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0]+1));//����Ϊ�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*a));//����Ϊ��һ�е��ĸ�Ԫ��16�ֽ�
	printf("%d\n", sizeof(a[3]));
	

	return 0;
}