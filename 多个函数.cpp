#include<stdio.h>
void butler(void);/*c����ԭ�ͣ���֪������Ҫʹ�øú���*/
int main(void)
{
	printf("i will summon the butler funtion\n");
	butler();//�������� 
	printf("yes,Bring me some tea and writeable DVDs.\n");
	return 0;
} 
void butler(void)/*�������忪ʼ*/
{
	printf("You rang,sir?\n");//�þ仰ʹ������main������butler��λ�� 
} 

