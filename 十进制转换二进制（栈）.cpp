#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //静态顺序栈存储的最大空间 

typedef struct
{
	int data[MAXSIZE];//静态顺序栈可用的最大容量 
	int top;//栈顶
}SqStack;

void InitStack(SqStack &S)//栈的初始化 
{
	S.top = -1;
}

int Push(SqStack &S,int e)//进栈 
{
	if(S.top==MAXSIZE-1)//判断栈是否为满 
	{
		printf("栈满！\n");
		return 0;
	}
	S.data[++S.top]=e; 
	return 0; 
}

void Pop(SqStack &S)//使栈顶元素出栈，并输出栈顶元素，且栈长减一 
{
	if(S.top == -1)//判断栈是否为空 
		printf("栈空！\n");
	else
	
		printf("%d",S.data[S.top--]);//输出栈顶元素 
}

void Binary(SqStack S)//十进制转二进制函数 
{
	int a;
	int i = 0;
	printf("请输入十进制数： "); 
	scanf("%d",&a);//输入任意的十进制数 
	while(a)//循环结束条件是a为0 
	{
		Push(S,a%2);//余数进栈 
		a = a/2;
		i++;
	}
	while(i)//循环终止条件是i为0 
	{
		Pop(S);//依次输出栈顶元素 
		i--;
	}
}

int main()
{
	SqStack S;
	InitStack(S);//创建一个栈，并初始化 
	Binary(S);//进制转换 
	return 0;
}
