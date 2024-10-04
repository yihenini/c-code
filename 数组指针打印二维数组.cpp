
int main()
{
	int arr[3][3] = { {1,2,3 } ,{5,8,8}, {5,5,99} };
	int(*pa)[3] = arr;
	int i = 0;
	for (i = 0;i < 3; i++)
	{
		int j = 0;
		for (j = 0;j < 3;j++)
		{
			printf("%d  ",  *( * (pa + i)+j)    );
		}
		printf("\n");
	}
	return 0;
}