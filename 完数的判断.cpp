#include<stdio.h>
int main(){
	int N,n;
	int i;
	int sum=0; 
	scanf("%d",&N);
	for(n=2;n<=N;n++){
		for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
		if(sum==n)
		printf("%d这个数是完数！\n",n);
		else continue;
	}
}
	return 0;
} 
