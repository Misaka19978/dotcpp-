#include<stdio.h>
int main(void)
{
	//sizeof��c������������������ֽ�Ϊ��λ����ָ�����͵Ĵ�С 
	printf("Type int has a size of %zd bytes.\n",sizeof(int));//%zdװ��˵��ƥ��sizeof�ķ������͡� 
	printf("Type char has a size of %zd bytes.\n",sizeof(char));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	return 0;
}
