#include<stdio.h>
int main(){
	
	int a[3][3];
	int i,j;
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	
	
	int sum_1=0,sum_2=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				sum_1+=a[i][j];
			}
		}
	}
	
	for(i=2;i>=0;i--){
		sum_2+=a[i][2-i];
	}
	printf("%d %d",sum_1,sum_2);
	
	
	
	
	return 0;
}
