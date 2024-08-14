void ve(int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i=x;i<=y;i++)
	{
		for (j=2;j<=i-1;j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else if(j==i-1)
			{
				count = count + 1;
				printf("%d\n", i);
			}
		}
	}
	printf("素数总共有：%d", count);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	ve(a, b);
	return 0;
}