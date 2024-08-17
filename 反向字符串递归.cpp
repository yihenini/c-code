void averse(char*x)
{
	if (*x == '\0')
	{
		return;
	}
	else
	{
		averse(x + 1);
		printf("%c", *x);
	}
}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	averse(arr);
}