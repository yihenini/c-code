#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char n;
//	scanf("%c", &n);
//	if (n == 'n')
//	{
//		printf("��������");
//		return 0;
//	}
//
//int main()
//{
//	char password[20] = { 0 };
//	int ch;
//	printf("����������");
//	scanf("%s", password);
//	printf("��ȷ������");
//	while ((ch=getchar()) != '\n')
//	{
//		if (ch == ' ')
//		{
//			printf("�����в����пո�");
//		}
//		;
//	}
//	if (getchar() == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����������");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	/*scanf("%d", &n);*/
//	
//	int sum2 = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		int sum = 1;
//		for (i = 1;i<=n;i++)
//		{
//			sum = sum * i;
//		}
//		sum2 = sum2 + sum;
//	}
//	
//	printf("%d", sum2);
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 185;
	int left = 0;
	int mid = 0;
	int right = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	right = len - 1;

	while(left<=right)
	{
		mid = (right + left) / 2;
		if ((arr[mid]) < k)
		{
			left = mid + 1;
		}
		else if ((arr[mid]) > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("founded,�±��ǣ�%d",mid);
			break;
		}
		if (left > right)
		{

			printf("��û��");
		}
	}
	return 0;
}