
int main()
{
	int a = 5;
	//    0101
	int b = 1;
	//    0001
	a = a |(b << 3);
	//    1000......1101
	printf("%d\n", a);
	int c = ~(b << 3);
	//    1000      0111
	a = a & c;
	printf("%d", a);
	return 0;
}