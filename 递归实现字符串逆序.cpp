//#include<stdio.h>
////void Backward(char arr[])
////{
////	if (*arr != '\0')
////	{
////		Backward(arr + 1);
////		printf("%c", *arr);
////	}
////	else
////		printf("%c",*arr);
////}
//void Backward(char arr[], int left,int right)
//{
//	if (left < right)
//	{
//		Backward(arr, left + 1, right - 1);
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//	/*else
//		return;*/
//}
//int main()
//{
//	char arr[] = "abcdcdefghijklmn";
//	printf("%s\n", arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;
//	Backward(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}