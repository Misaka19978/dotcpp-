#include<stdio.h>
int main(){
	
	
	int a[10]={};          //������һ����һ�������飬׼������������ 
	int i,n;
	for(i=0;i<9;i++){       //�����ź�������� 
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&n);
	a[9]=n;                 //�Ӻ��濪ʼ�Ƚ� 
	int temp;
	for(i=9;i>0;i--){         //������Ҫ������������Ǳ�ǰһλС�ͽ���λ�� 
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
