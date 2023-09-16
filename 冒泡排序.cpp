#include<stdio.h>
void Bubble_sort(int arr[], int size)
{
	int j,i,tem;
	for (i = 0; i < size-1;i ++)//size-1表示不用与自己比较
	{
		int count = 0;
		for (j = 0; j < size-1 - i; j++)	//size-1-i是因为每一趟就会少一个数比较
		{
			if (arr[j] > arr[j+1])//升序
			{
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
				count = 1;
				
			}
		}
		if (count == 0)			//说明已经排好序，退出循环
				break;	
	}
 
}
int main()
{
	int arr[10];
	int i;
	
	printf("请输入8个数\n");
	for (i = 0; i < 8; i++)		//接收用户的数值
	{
		scanf("%d", &arr[i]);
	}
	printf("\n排序后的数组");
	Bubble_sort(arr, 8);
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
 
	return 0;
}
