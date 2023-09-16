#include<stdio.h>
int main(){
	float a;
	int num,b;
	scanf("%f",&a);
	for(num=1;num<4;num++){
		for(b=num;b>0;b--){
			printf("%6.2f ",a);
		}
	printf("\n");
	}
		return 0;
}
