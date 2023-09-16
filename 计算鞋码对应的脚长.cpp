#include<stdio.h>
#define ADJUST 7.31//声明字符变量 
int main(void)
{
	const double SCALE=0.333;//const变量
	double shoe,foot;
	printf("Shoe size(men's) foot length\n");
	shoe=3.0;
	while(shoe<18.5)// while循环开始，shoe小于18.5就会一直循环 
	{
		foot=SCALE*shoe+ADJUST;//块开始 
		printf("%10.1f %15.2f inches\n",shoe,foot);
		shoe=shoe+1.0;//块结束，并使shoe每次+1 
	} 
	printf("If the shoe fits,wear it.\n");
	return 0;
}
