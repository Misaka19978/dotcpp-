#include<stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];//字符数组，用于储存字符串 
	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f",&age,&assets);
	scanf("%S",pet);//字符数组不使用& 
	printf("%d $%.2f %s\n",age,assets,pet);
	return 0;
} 
