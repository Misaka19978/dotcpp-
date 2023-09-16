#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf(" $________\b\b\b\b\b\b\b");//7个_，而\b表示退格符（back），将光标左移7个位置 
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12);//\t将光标移至该行的制表点，一般为第9列  
	printf("\rGee!\n");//\r将光表回到当前行的起始处. 
	return 0;
}
