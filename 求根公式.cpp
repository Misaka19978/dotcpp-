#include<stdio.h>
#include<math.h>              //需要用到sqrt（）-开根号，fabs（）-求绝对值 
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
	 
	 else if(delta<0){                    //求虚数根公式要将根号Δ取绝对值，然后-b/2a，根号Δ/2a 加i 
	 	x1=-b/K;
		 x2=sqrt(fabs(delta))/K;
			printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",-b/K,sqrt(fabs(delta))/K,-b/K,sqrt(fabs(delta))/K);
	 }
	 
 	
 	return 0;
 }
