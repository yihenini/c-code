int count1(unsigned int x)
{
	int count = 0;
	while (x != 0)
	{
		if (x % 2 == 1)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}
int count2(int x)
{
	int count = 0;
	int i = 0;
	for (i = 0;i < 32;i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int count3(int x)
{
	int count = 0;
	while (x)
	{
		x = x & (x - 1);
		count += 1;	
	}
	return count;
}
int main()
{
	int a = -1;
	printf("%d", count1(a));
	printf("%d", count2(a));
	printf("%d", count3(a));
}