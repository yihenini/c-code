int fei_digui(int x)
{
	if (x > 2)
	{
		return (fei_digui(x - 1) + fei_digui(x - 2));
	}
	else
	{
		return 1;	
	}
}
int fei_diedai(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		b = c;
		a = b;
		x--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fei_diedai(n));
}