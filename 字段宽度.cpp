#include<stdio.h>
#define PAGES 959
int main(void)
{
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);//待打印有3个位数字，字段宽度自动扩大 
	printf("*%10d*\n",PAGES);//输出结果有10个字符宽度（7个空格+3个数字） 
	printf("*%-10d*\n",PAGES);
	return 0;
	
} 
