#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a[10];
	int *p;
	printf("�������10����0��99����Χ���������\n\n");
	srand(time(0));
	for(p=a;p<(a+10);p++)
	*p=rand()%100;
	for(p=a;p<(a+10);p++)
	printf("%d ",*p);
	printf("\n");
	return 0;

}
