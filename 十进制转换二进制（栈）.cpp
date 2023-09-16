#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //��̬˳��ջ�洢�����ռ� 

typedef struct
{
	int data[MAXSIZE];//��̬˳��ջ���õ�������� 
	int top;//ջ��
}SqStack;

void InitStack(SqStack &S)//ջ�ĳ�ʼ�� 
{
	S.top = -1;
}

int Push(SqStack &S,int e)//��ջ 
{
	if(S.top==MAXSIZE-1)//�ж�ջ�Ƿ�Ϊ�� 
	{
		printf("ջ����\n");
		return 0;
	}
	S.data[++S.top]=e; 
	return 0; 
}

void Pop(SqStack &S)//ʹջ��Ԫ�س�ջ�������ջ��Ԫ�أ���ջ����һ 
{
	if(S.top == -1)//�ж�ջ�Ƿ�Ϊ�� 
		printf("ջ�գ�\n");
	else
	
		printf("%d",S.data[S.top--]);//���ջ��Ԫ�� 
}

void Binary(SqStack S)//ʮ����ת�����ƺ��� 
{
	int a;
	int i = 0;
	printf("������ʮ�������� "); 
	scanf("%d",&a);//���������ʮ������ 
	while(a)//ѭ������������aΪ0 
	{
		Push(S,a%2);//������ջ 
		a = a/2;
		i++;
	}
	while(i)//ѭ����ֹ������iΪ0 
	{
		Pop(S);//�������ջ��Ԫ�� 
		i--;
	}
}

int main()
{
	SqStack S;
	InitStack(S);//����һ��ջ������ʼ�� 
	Binary(S);//����ת�� 
	return 0;
}
