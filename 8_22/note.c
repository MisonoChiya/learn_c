#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//写一个函数判断一年是否为闰年
//打印1000~2000年之间的闰年
//判断闰年的规则
//1.能被4整除,且不能被100整除
//2.能被400整除

/*
int main()
{
	int year = 0;
	int count = 0;
	for (year=1000;year<=2000;year++)
	{
		//判断闰年
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
				count++;
			}
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
*/

/*
//优化
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
*/

/*
 //函数
is_leap_year(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
*/

/*
//函数 - 二分查找
//找到了返回下标
//没找到返回-1
int binary_search(int arr[],int k ,int size)
{
	int left = 0;
	int right = size - 1;
	//循环条件:左右不相等
	while (left<=right)
	{
		//中间
		int mid = left + (right - left) / 2;
		//如果中间比要找的元素小
		if (arr[mid] < k)
		{
			//[mid,right]
			left = mid + 1;
		}
		//如果中间比要找的元素大
		else if (arr[mid] > k)
		{
			//[left,mid]
			right = mid - 1;
		}
		else
		{
			//找到返回下标
			return mid;
		}
	}
	//找不到的情况
	return -1;
}
int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, size);
	if(ret==-1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("\n找到了,下标是：%d", ret);
	}
	return 0;
}
*/

