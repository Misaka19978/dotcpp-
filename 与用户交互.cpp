#include<stdio.h>
#include<string.h>//�ṩstrlen����������ԭ�� 
#define DENSITY 62.4 //���������ܶȣ���λ����/����Ӣ�ߣ� 
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[40];//40�����浥Ԫֻ�ܴ洢39���ַ�����һ�������ַ� 
	printf("Hi!What's your first name?\n");
	scanf("%s",&name);//scanfֻ�ܶ�ȡ�ַ�����һ������ 
	printf("%s,what is your weight in pounds?\n");
	scanf("%f",&weight);
	size=sizeof(name);
	letters=strlen(name);//��ȡ�ַ����ĳ��� 
	volume=weight/DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letter,\n",letters);
	printf("and we have %d bytes to store it.\n",size);//store���� 
	return 0;
}
