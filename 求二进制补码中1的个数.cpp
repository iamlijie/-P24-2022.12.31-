//#include<stdio.h>
////int Count_num_one(unsigned int a)
////{
////	int count = 0;
////	while (a)
////	{
////		int b = a % 2;
////		if (1 == b)
////			count++;
////		a /= 2;
////	}
////	return count;
////}
////int Count_num_one(int a)
////{
////	int count = 0;
////	for (int i = 0; i < 32; i++)
////	{
////		int b = (0 | (a >> i));
////		if (1 == b)
////			count++;
////	}
////	return count;
////}
//
//int Count_num_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a & (a - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=Count_num_one(a);
//	printf("%d\n", count);
//	return 0;
//}