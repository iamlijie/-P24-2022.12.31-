//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	/*for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((c >> i) & 1))
//			count++;
//	}*/
//	while (c)
//	{
//		count++;
//		c = c & (c - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}