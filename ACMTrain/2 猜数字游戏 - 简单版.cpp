// 2: 猜数字游戏 - 简单版

/*
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	int n;
	int num[1000] = { 0 };
	int guess[1000] = { 0 };
	int f_num[1000] = { 0 };	//	判断原数组每个位置是否被判断过
	int f_guess[1000] = { 0 };	//	判断猜测数组每个位置是否被判断过
	int ff = 1;	//	ff控制每组数据是否结束
	int i, j;
	int a, b;
	int cnt = 1;	//	记录game次数
	int sum = 0;	//	获取每组数据的值，若为0则ff为0 


	while (scanf("%d", &n) != EOF && n != 0)
	{
		printf("Game %d:\n", cnt);
		cnt++;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &num[i]);
		}

		while (ff != 0)
		{
			sum = 0;
			a = b = 0;
			memset(f_num, 0, sizeof(f_num));
			memset(f_guess, 0, sizeof(f_guess));
			memset(guess, 0, sizeof(guess));
			//	输入时判定是否有相同位置，并标记。
			for (i = 0; i < n; i++)
			{
				scanf("%d", &guess[i]);
				sum += guess[i];

				if (guess[i] == num[i])
				{
					a++;
					f_num[i] = 1;
					f_guess[i] = 1;
				}
			}

			//	寻找b
			if (sum == 0)
			{
				ff = 0;
			}
			else
			{
				for(i = 0; i < n;i++)
				{
					if (f_guess[i] == 0)
					{
						for (j = 0; j < n; j++)
						{
							if (f_num[j] == 0 && num[j] == guess[i])
							{
								b++;
								f_num[j] = 1;
								f_guess[i] = 1;
								break;
							}
						}
					}
				}

				printf("    (%d,%d)\n", a, b);
			}
			
		}

		ff = 1;
	}

	return 0;
}
*/

