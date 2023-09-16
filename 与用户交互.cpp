#include<stdio.h>
#include<string.h>//提供strlen（）函数的原型 
#define DENSITY 62.4 //声明人体密度（单位；磅/立方英尺） 
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[40];//40个储存单元只能存储39个字符，留一个给空字符 
	printf("Hi!What's your first name?\n");
	scanf("%s",&name);//scanf只能读取字符串中一个单词 
	printf("%s,what is your weight in pounds?\n");
	scanf("%f",&weight);
	size=sizeof(name);
	letters=strlen(name);//获取字符串的长度 
	volume=weight/DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letter,\n",letters);
	printf("and we have %d bytes to store it.\n",size);//store储存 
	return 0;
}
