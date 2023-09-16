#include<stdio.h>
void butler(void);/*c函数原型，告知编译器要使用该函数*/
int main(void)
{
	printf("i will summon the butler funtion\n");
	butler();//函数调用 
	printf("yes,Bring me some tea and writeable DVDs.\n");
	return 0;
} 
void butler(void)/*函数定义开始*/
{
	printf("You rang,sir?\n");//该句话使用在于main（）中butler的位置 
} 

