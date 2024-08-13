int main()
{
	char tpassword[50] = { 0 };
	char ypassword[50] = { 0 };
	int i = 0;
	printf("请输入他妈的密码：");
	scanf("%s", &tpassword);
	printf("请确认他妈的密码：");
	scanf("%s", &ypassword);
	for (i = 1;i <= 4;i++)
	{
		if (strcmp(tpassword, ypassword) == 0)
		{
			printf("恭喜你，他妈的确认成功了");
			break;
		}
		else if (i <= 3)
		{
			printf("泥马勒戈壁，确认失败，你就是个傻逼,给我重写");
			scanf("%s", &ypassword);
		}
		else
		{
			printf("你果然是傻逼，三次都写不对");

        }
	}
	return 0;
}