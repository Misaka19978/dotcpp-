#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
		printf("not prime");
		break;
		}
		else if(i==n/2)
			printf("prime");
	}
	return 0;
} 
