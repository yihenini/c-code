//void adverse(char*x,int left,int right)
//{
//	
//	if (left < right)
//	{
//		adverse(x, left + 1, right - 1);
//	}
//		int tmp = 0;
//		tmp = *(x + left);
//		*(x + left) = *(x + right);
//		*(x +  right) = tmp;
//}
//int main()
//{
//	int left = 0;
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	int right = len - 1;
//	adverse(arr, left, len - 1);
//	printf("%s", arr);
//}

void adverse(char* x)
{
	int len = strlen(x);
	char tmp = *x;
	*x = *(x + len - 1);
	*(x + len - 1) = '\0';
	if (len > 1)
	{
		adverse(x + 1);
	}
	*(x + len - 1) = tmp;
}

int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	adverse(arr);
	printf("%s", arr);
}
