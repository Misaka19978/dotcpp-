#include<stdio.h>
int main(void)
{
	int x=100;
	printf("dec=%d;octal=%o;hex=%x\n",x,x,x);//octal��ʾ�˽��ƣ�hex��ʾʮ������ 
	printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);//��ʾ0��0xҪ��ת��˵���ӡ�#�� 
	return 0;
}
