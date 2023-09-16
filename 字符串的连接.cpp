#include<stdio.h>
int main(){
	
	char str1[]={};
	char str2[]={};
	gets(str1);
	gets(str2);
	
	char a;
	a=str1+str2;
	printf("%s",a);
	
	return 0;
}
