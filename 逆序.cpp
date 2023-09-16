#include<stdio.h>
int main(){
	int a[10];
	int i,j;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
		for(j=9;j>=0;j--){
			printf("%-2d",a[j]);
		}
		return 0;
	
}
