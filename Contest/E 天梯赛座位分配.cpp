// E 天梯赛座位分配

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;   // 存放学校数 
	int* a; // 存放每个学校的队伍数
	int** seat; // 存放座位
	int teamNumber = 0; // 存放队伍总数
	int playerNumber = 0; // 存放选手总数
	int x = 0, y = 0; // 坐标
	int cnt = 0; // 座位编号
	int schoolNumber = 0; // 学校编号
	int i, j;
	int num = 0;

	// 获取学校数
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);

	// 获得队伍数和选手总数
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		teamNumber+=a[i];
	}
	playerNumber = teamNumber * 10;

	// 生成seat二维数组
	seat = (int**)malloc(sizeof(int*) * teamNumber);
	for (i = 0; i < teamNumber; i++)
	{
		seat[i] = (int*)malloc(sizeof(int) * 10);
	}

	// 编号
	while (playerNumber > 0)
	{
		// 存放编号
		seat[x][y] = cnt;
		cnt++;

		// 纵坐标变化
		x += a[schoolNumber];
		schoolNumber++;
		
		if (x > teamNumber)
		{
			x -= teamNumber;
			y++;
		}

		if (schoolNumber > n)
		{
			schoolNumber = 0;
			y++; 		// 横坐标变化

			// 排完一个队伍
			if (y == 10)
			{
				x++;
				y = 0;

				// 每一个学校的代表队减一
				for (i = 0; i < n; i++)
					a[i]--;
			}
		}

		playerNumber--;
	}

	// 输出
	for (i = 0; i < teamNumber;i++)
	{
		printf("%d", seat[i][0]);

		for (j = 1; j < 10; j++)
		{
			printf(" %d", seat[i][j]);
		}
		printf("\n");
	}

	// 释放内存
	for (i = 0; i < teamNumber; i++)
	{
		free(seat[i]);
	}
	free(seat);
	free(a);

	return 0;
}
*/
