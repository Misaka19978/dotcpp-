#include<stdio.h>
#define PAGES 959
int main(void)
{
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);//����ӡ��3��λ���֣��ֶο���Զ����� 
	printf("*%10d*\n",PAGES);//��������10���ַ���ȣ�7���ո�+3�����֣� 
	printf("*%-10d*\n",PAGES);
	return 0;
	
} 
