#include<stdio.h>
int main(void)
{
	float aboat=32000;
	double abet=2.14e9;
	long double dip=5.32e-5;
	printf("%f can be written %e\n",aboat,aboat);
	printf("And it's %a in hexadecimal ,power of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n",dip,dip);//打印long double要用%Le，%Lf或%La 
	return 0;
} 
