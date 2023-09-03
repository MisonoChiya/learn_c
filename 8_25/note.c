#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
//函数 - 二分查找
int binary_search(int arr[], int k, int size)
{
	int left = 0;
	int right = size - 1;
	//循环条件:左右不相等
	while (left <= right)
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
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是：%d", ret);
	}
	return 0;
}
//数组传参实际上传的是数组首元素的地址
//而不是整个数组
//在函数内部计算一个函数参数部分的数组元素的个数是不靠谱的
//形参arr[]看上去是数组,但实际上是指针变量
*/

/*
//传址调用 - 写一个函数每调用一次num自增1
void add(int*p)
{
	(*p)++;
	return 0;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d\n", num);//第一次
	add(&num);
	printf("%d\n", num);//第二次
	add(&num);
	printf("%d\n", num);//第三次
	add(&num);
	printf("%d\n", num);//第四次
	add(&num);
	printf("%d\n", num);//第五次
	return 0;
}
*/

/*
//函数嵌套
//函数是可以互相调用的
//int main 中调用three_line函数，three_line函数再调用one_line函数
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

//链式访问
/*

int main()
{
	//普通写法
	int len = strlen("abcdef");
	printf("普通写法>%d\n", len);
	//链式访问 - 把strlen的返回值作为参数传给%d进行打印
	printf("链式访问>%d\n", strlen("abcdef"));
	return 0;
}

*/
/*

int main()
{
//printf的返回值是( )内部内容的个数
//3.打印printf(2)的返回值1		2.打印printf(43)的返回值2	1.先打印43
//				↑									↑											↑
		printf( "%d" ,				printf( "%d" ,					printf( "%d" ,  43 ) ) ) ;
//最终结果4321
	return 0;
}

*/

/*

//如果想把函数定义在后面时，需要先声明函数
//函数声明 - 返回类型/(函数名/)参数
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
如何导入静态库
//#pragma comment(lib,"静态库名.lib")
*/

/*
建议将函数的声明放入头文件，函数内容放在源文件中
*/

/*
//函数递归 - 通过函数自己调用自己来实现用更少的代码解决重复计算
//把大问题，转化为与原意相同的小问题
//递归存在两个必要的条件: 1.有限制条件  2.每次递归以后越来越接近这个限制条件
//例如:
//输入:1234 打印:1  2  3  4
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
//用函数求字符串长度
int my_len(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;//找下一个字符
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";//传的参的类型是指针变量
	int len = my_len(arr);
	printf("%d",len);
	return 0;
}
*/

/*
//不创建临时变量，求字符串的长度
//递归求解
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
	char arr[] = "abcdef";//传的参的类型是指针变量
	int len = my_len(arr);
	printf("%d", len);
	return 0;
}
*/

/*
//函数递归阶乘
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
//迭代阶乘
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
//求第n个斐波那契数列
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
