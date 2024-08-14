void ji(int*pa,int*pb)//交换位置
{
	int z = 0;
	z =* pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 5999;
	printf("%d %d\n", a, b);
	ji(&a, &b);
	printf("%d %d", a, b);
}
