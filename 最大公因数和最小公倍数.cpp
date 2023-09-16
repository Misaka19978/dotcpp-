#include<stdio.h>
		int lcm(int i,int j);
		int gcd(int x,int y);
int gcd(int x,int y){
	int temp;
	if(y>x){
		temp=y;
		y=x;
		x=temp;
	}                      //确定x为最大值，以方便辗转相除法使用
	                       //辗转相除法——x对y取余，再将原先除数作被除数，余数做除数，直到取余为0；则最大公因数为上一个算式的取余 
		int a;
		
		//辗转相除法过程 
		while(x%y!=0){
			a=x;
			x=y;
			y=a%x;
		}
		return y;
	}
	
	//利用最大公因数来求最小公倍数 
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
