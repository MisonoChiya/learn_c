#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
//���� - ���ֲ���
int binary_search(int arr[], int k, int size)
{
	int left = 0;
	int right = size - 1;
	//ѭ������:���Ҳ����
	while (left <= right)
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
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±��ǣ�%d", ret);
	}
	return 0;
}
//���鴫��ʵ���ϴ�����������Ԫ�صĵ�ַ
//��������������
//�ں����ڲ�����һ�������������ֵ�����Ԫ�صĸ����ǲ����׵�
//�β�arr[]����ȥ������,��ʵ������ָ�����
*/

/*
//��ַ���� - дһ������ÿ����һ��num����1
void add(int*p)
{
	(*p)++;
	return 0;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d\n", num);//��һ��
	add(&num);
	printf("%d\n", num);//�ڶ���
	add(&num);
	printf("%d\n", num);//������
	add(&num);
	printf("%d\n", num);//���Ĵ�
	add(&num);
	printf("%d\n", num);//�����
	return 0;
}
*/

/*
//����Ƕ��
//�����ǿ��Ի�����õ�
//int main �е���three_line������three_line�����ٵ���one_line����
void one_line()
{
	printf("Line\n");
}
void three_line()
{
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		one_line();
	}
}
int main()
{
	three_line();
	return 0;
}
*/

//��ʽ����
/*

int main()
{
	//��ͨд��
	int len = strlen("abcdef");
	printf("��ͨд��>%d\n", len);
	//��ʽ���� - ��strlen�ķ���ֵ��Ϊ��������%d���д�ӡ
	printf("��ʽ����>%d\n", strlen("abcdef"));
	return 0;
}

*/
/*

int main()
{
//printf�ķ���ֵ��( )�ڲ����ݵĸ���
//3.��ӡprintf(2)�ķ���ֵ1		2.��ӡprintf(43)�ķ���ֵ2	1.�ȴ�ӡ43
//				��									��											��
		printf( "%d" ,				printf( "%d" ,					printf( "%d" ,  43 ) ) ) ;
//���ս��4321
	return 0;
}

*/

/*

//�����Ѻ��������ں���ʱ����Ҫ����������
//�������� - ��������/(������/)����
int add(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add( a , b );
	printf("sum=%d", sum);
	return 0;
}
int add(int x, int y)
{
	return x + y;
}

*/

/* 
��ε��뾲̬��
//#pragma comment(lib,"��̬����.lib")
*/

/*
���齫��������������ͷ�ļ����������ݷ���Դ�ļ���
*/

/*
//�����ݹ� - ͨ�������Լ������Լ���ʵ���ø��ٵĴ������ظ�����
//�Ѵ����⣬ת��Ϊ��ԭ����ͬ��С����
//�ݹ����������Ҫ������: 1.����������  2.ÿ�εݹ��Ժ�Խ��Խ�ӽ������������
//����:
//����:1234 ��ӡ:1  2  3  4
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}
*/

/*
//�ú������ַ�������
int my_len(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;//����һ���ַ�
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";//���Ĳε�������ָ�����
	int len = my_len(arr);
	printf("%d",len);
	return 0;
}
*/

/*
//��������ʱ���������ַ����ĳ���
//�ݹ����
int my_len(char *s)
{
	if (*s != '\0')
	{
		return 1 + my_len(s + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "abcdef";//���Ĳε�������ָ�����
	int len = my_len(arr);
	printf("%d", len);
	return 0;
}
*/

/*
//�����ݹ�׳�
int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = fac(num);
	printf("ret=%d", ret);
	return 0;
}
*/

/*
//�����׳�
int fac(int num)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= num; i++)
	{
		ret = ret * i;

	}
	return ret;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int result = fac(num);
	printf("%d", result);
	return 0;
}
*/

/*
//���n��쳲���������
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d",ret);
	return 0;
}
*/
