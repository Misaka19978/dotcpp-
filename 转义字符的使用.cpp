#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf(" $________\b\b\b\b\b\b\b");//7��_����\b��ʾ�˸����back�������������7��λ�� 
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12);//\t������������е��Ʊ�㣬һ��Ϊ��9��  
	printf("\rGee!\n");//\r�����ص���ǰ�е���ʼ��. 
	return 0;
}
