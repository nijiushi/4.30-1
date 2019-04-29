#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int find(int a[], int k, int size)
{
	int left = 0;
	int right = size;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] == k)
		{
			return mid;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int size = 0;
	int k = 0;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	size = sizeof(a) / sizeof(a[0]) - 1;
	scanf("%d", &k);//输入你要查找的数
	if (find(a, k, size) != -1)
	{
		printf("找到了，下标为%d", find(a, k, size));
	}
	else
	{
		printf("找不到");
	}
	system("pause");
	return 0;
}