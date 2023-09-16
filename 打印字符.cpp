#include<stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf("%c",&ch);//用户输入字符 
	printf("The code for %c is %d.\n",ch,ch);//%d使得字符转换成ASCII码 
	return 0;
}/*char 型，与short int, long int 一样，在计算机内，用的
是2进制。输入输出可以用 10进制，16进制，8进制。
当输出格式用 %c 时，它们都可以输出为字
符，当输入格式用 %c 时，它们都可以把输入的字符转为 整型ascii码值.*/ 
