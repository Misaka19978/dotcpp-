#include<stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf("%c",&ch);//�û������ַ� 
	printf("The code for %c is %d.\n",ch,ch);//%dʹ���ַ�ת����ASCII�� 
	return 0;
}/*char �ͣ���short int, long int һ�����ڼ�����ڣ��õ�
��2���ơ�������������� 10���ƣ�16���ƣ�8���ơ�
�������ʽ�� %c ʱ�����Ƕ��������Ϊ��
�����������ʽ�� %c ʱ�����Ƕ����԰�������ַ�תΪ ����ascii��ֵ.*/ 
