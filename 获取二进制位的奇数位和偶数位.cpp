//#include<stdio.h>
//void Get_oddeven(int a)
//{
//	int arr[32] = { 0 };
//	int num = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		arr[i] = (a >> i) & 1;
//	}
//	printf("奇数位上的数字分别是：\n");
//	for (int i = 0; i < 32; i += 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n偶数位上的数字分别是：\n");
//	for (int i = 1; i < 32; i += 2)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Get_oddeven(a);
//	return 0;
//}