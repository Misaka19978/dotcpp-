#include<stdio.h>
#include<math.h>              //��Ҫ�õ�sqrt����-�����ţ�fabs����-�����ֵ 
 int main(){
 	
 	float a,b,c,x1,x2,delta;
 	scanf("%f%f%f",&a,&b,&c);
 	delta=b*b-4*a*c;
 	
 	int K;
 	K=2*a;
 	if(delta>0){
	 	x1=(-b+sqrt(delta))/K;
	 	x2=(-b-sqrt(delta))/K;
	 	printf("x1=%.3f x2=%.3f",x1,x2);
	 }
	 
	 else if(delta==0){
	 	x1=x2=-b/K;
	 	printf("x1=%.3f x2=.3%f",x1,x2);
	 }
	 
	 else if(delta<0){                    //����������ʽҪ�����Ŧ�ȡ����ֵ��Ȼ��-b/2a�����Ŧ�/2a ��i 
	 	x1=-b/K;
		 x2=sqrt(fabs(delta))/K;
			printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",-b/K,sqrt(fabs(delta))/K,-b/K,sqrt(fabs(delta))/K);
	 }
	 
 	
 	return 0;
 }
