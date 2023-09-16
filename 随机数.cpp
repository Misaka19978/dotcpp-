#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a[10];
	int *p;
	printf("随机产生10个【0，99】范围内随机数：\n\n");
	srand(time(0));
	for(p=a;p<(a+10);p++)
	*p=rand()%100;
	for(p=a;p<(a+10);p++)
	printf("%d ",*p);
	printf("\n");
	return 0;

}
