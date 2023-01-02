//#include<stdio.h>
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//int Fib(int n)
//{
//	int i = 0;
//	int arr[50] = { 1,1,0 };
//	if (n <= 2)
//		return 1;
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//		return arr[n-1];
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Fib(n));
//	return 0;
//}