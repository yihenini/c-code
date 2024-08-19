void swap(int *x,int *y)
{
	if (*x > *y)
	{
		int tmp = 0;
		tmp = *x;
		*x = *y;
		*y = tmp;
	}
	return;
}

void bubble(int arr[],int len)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i <len-1; i++)
	{
		if (flag == 1)
		{
			return;
		}
		for (j = 0;j < len-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
	}
}


int main()
{
	int arr[20] = { 5,9,1,7,8,25,63,15,2,3,4,6,65,89,564,856,46,56,1,78};
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,len);
	int i = 0;
	for (i = 0; i <= len - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}