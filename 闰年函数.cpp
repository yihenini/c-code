int leap(int x)
{
	return((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
}

int main()
{
	int i = 0;
	for (i = 1000;i <= 2000;i++)
	{
		if (leap(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}