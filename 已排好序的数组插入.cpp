#include<stdio.h>
int main(){
	
	
	int a[10]={};          //先设置一个大一个的数组，准备放入插入的数 
	int i,n;
	for(i=0;i<9;i++){       //输入排好序的数组 
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&n);
	a[9]=n;                 //从后面开始比较 
	int temp;
	for(i=9;i>0;i--){         //插入主要操作，具体就是比前一位小就交换位置 
		if(a[i]<a[i-1]){
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
