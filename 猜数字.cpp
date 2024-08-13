void game()
{
	int guess = 0;
	int num = 0;
	num = rand() % 100 + 1;
	printf("现在来猜吧，傻逼\n");
	for (;;)
	{
		scanf("%d", &guess);
		if (guess == num)
		{
			printf("终于他妈的猜对了，傻逼\n");
			break;
		}
		else if (guess > num)
		{
			printf("猜的太大了，傻逼，给我重新猜\n");
		}
		else
		{
			printf("猜的太小了，傻逼，给我重新猜\n");
		}

	}
	
}
void menu()
{
	printf("########################\n");
	printf("########################\n");
	printf("########################\n");
	printf("######1.开始游戏########\n");
	printf("######2.结束游戏########\n");
	printf("########################\n");
	printf("########################\n");
	printf("########################\n");
}
int main()
{
	int c = 0;

	do
	{
		srand(time(NULL));
		menu();
		printf("傻逼，来选择了\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("我他妈让你写其他东西了吗，他妈的给我重新选择\n");
			break;
		}
	} while (c!=2);
	return 0;
}