#include<stdio.h>
		int lcm(int i,int j);
		int gcd(int x,int y);
int gcd(int x,int y){
	int temp;
	if(y>x){
		temp=y;
		y=x;
		x=temp;
	}                      //ȷ��xΪ���ֵ���Է���շת�����ʹ��
	                       //շת���������x��yȡ�࣬�ٽ�ԭ�ȳ�������������������������ֱ��ȡ��Ϊ0�����������Ϊ��һ����ʽ��ȡ�� 
		int a;
		
		//շת��������� 
		while(x%y!=0){
			a=x;
			x=y;
			y=a%x;
		}
		return y;
	}
	
	//�����������������С������ 
	int lcm(int i,int j){
		int b=0;
		b=(i*j)/gcd(i,j);
		return b;
	}
	int main(){
		int x,y;
		scanf("%d%d",&x,&y);
		printf("%d ",gcd(x,y));
		printf("%d",lcm(x,y));
		return 0;
	}
