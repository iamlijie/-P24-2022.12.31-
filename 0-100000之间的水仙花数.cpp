#include<stdio.h>
int Count_n(int n)
{
	int count = 0;
	while (n)
	{
		int i = n % 10;
			count++;
		n /= 10;
	}
	return count;
}
int Pow(int i,int count)
{
	int sum = 1;
	for (int j = 1; j <= count; j++)
		sum *= i;
	return sum;
}
void IsNar(int n)
{
	int count=Count_n(n);//计算是几位数
	int sum = 0;
	int m = n;
	while (m)
	{
		int i = m % 10;
		sum+=Pow(i,count);//累积各位上的次方之和
		m /= 10;
	}
	if (n == sum)
		printf("%d ", n);
}
int main()
{
	int n = 0;
	for (n = 0; n <= 100000000000; n++)
	{
		IsNar(n);
	}
	/*printf("%d ", IsNar(n));*/	
	return 0;
}