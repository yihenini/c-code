int fac(int x)
{
	if (x > 0)
	{
		return x * fac(x - 1);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",fac(a));
	return 0;
}