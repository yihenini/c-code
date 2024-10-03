void change(char* a, char* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void averse_sen(char* left,char* right)
{
	while (left  < right)
	{
		change(left, right);
		left++;
		right--;
	}
}
void averse_wor(char*left)
{
	char* right = 0;
	do
	{
		right = left;
		while (*right != ' '&& *right != '\0')
		{
			right++;
		}
		averse_sen(left, right-1);
		left = right + 1;
	} while (*right != '\0');
}
int main()
{
	char arr[100] = "hello ni ma zhen de si le";
	int len = strlen(arr);
	averse_sen(arr,arr+len-1);
	printf("%s\n",arr);
	averse_wor(arr);
	printf("%s", arr);
}