#include<stdio.h>
int main(void)
{
	int x=100;
	printf("dec=%d;octal=%o;hex=%x\n",x,x,x);//octal表示八进制，hex表示十六进制 
	printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);//显示0或0x要在转换说明加“#” 
	return 0;
}
