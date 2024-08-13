#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char ch[] = { "fuckyoufuckyoufuckyoufuckyoufuckyou" };
	char out[] = { "###################################" };
	int left = 0;
	int right = strlen(ch) - 1;
	while (left <= right)
	{
		out[left] = ch[left];
		out[right] = ch[right];
		left = left + 1;
		right = right - 1;
		Sleep(150);
		system("cls");
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
		printf("%s\n", out);
	}


	return 0;
}