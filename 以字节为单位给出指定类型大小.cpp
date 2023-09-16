#include<stdio.h>
int main(void)
{
	//sizeof是c语言内置运算符，以字节为单位给出指定类型的大小 
	printf("Type int has a size of %zd bytes.\n",sizeof(int));//%zd装换说明匹配sizeof的返回类型。 
	printf("Type char has a size of %zd bytes.\n",sizeof(char));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	return 0;
}
