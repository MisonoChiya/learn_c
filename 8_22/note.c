#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//дһ�������ж�һ���Ƿ�Ϊ����
//��ӡ1000~2000��֮�������
//�ж�����Ĺ���
//1.�ܱ�4����,�Ҳ��ܱ�100����
//2.�ܱ�400����

/*
int main()
{
	int year = 0;
	int count = 0;
	for (year=1000;year<=2000;year++)
	{
		//�ж�����
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
//�Ż�
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
 //����
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
//���� - ���ֲ���
//�ҵ��˷����±�
//û�ҵ�����-1
int binary_search(int arr[],int k ,int size)
{
	int left = 0;
	int right = size - 1;
	//ѭ������:���Ҳ����
	while (left<=right)
	{
		//�м�
		int mid = left + (right - left) / 2;
		//����м��Ҫ�ҵ�Ԫ��С
		if (arr[mid] < k)
		{
			//[mid,right]
			left = mid + 1;
		}
		//����м��Ҫ�ҵ�Ԫ�ش�
		else if (arr[mid] > k)
		{
			//[left,mid]
			right = mid - 1;
		}
		else
		{
			//�ҵ������±�
			return mid;
		}
	}
	//�Ҳ��������
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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("\n�ҵ���,�±��ǣ�%d", ret);
	}
	return 0;
}
*/

