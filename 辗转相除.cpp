#include<stdio.h>
int gcd1(int x,int y)
{
	int z=x%y;
	while(z)
	{
		x=y;
		y=z;
		z=x%y;
	}
	return (y);
}
int main() 
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int max=gcd1(a,b);
	printf("%d %d�����Լ��Ϊ��%d",a,b,max);
	return 0;
}
