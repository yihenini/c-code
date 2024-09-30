char* stycop(char* des,const char* sor)
{
	assert(des != NULL);
	assert(sor != NULL);
	char* ret = des;
	while (* des++ = * sor++)
	{
		;
	}
	return ret;
}

size_t stylen(const char* des)
{
	size_t count = 0;
	assert(des);
	while (*des++ != '\0')
	{
		count++;
	}
	return count;
}


int main()
{
	char arr[10] = { 0 };
	char coc[10] = "hello";
	printf("%s\n", stycop(arr, coc));
	printf("%d", stylen(coc));
}