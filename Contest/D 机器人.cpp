// D	机器人

/*
# include <stdio.h>
# include <string.h>

int main()
{
	int a[12][12] = { 0 };
	int n;
	int i, j, x;
	int pos_x, pos_y;
	int t;
	int f = 0;
	int temp;
	while (scanf("%d", &n) != EOF)
	{
		f = 1;
		int x = 0;
		int y = 0;
		while (scanf("%d", &a[x][y]) != EOF)
		{
			if (a[x][y] != y * n + x + 1)
				f = 0;

			y++;
			if (y == n)
			{
				x++;
				y = 0;
			}
		}

		if (f == 1)
		{
			printf("YES\n");
		}
		else
		{
			// 外周转动
			for (x = 0; x < n * n - 1; x++)
			{
				// 第一排右移
				t = a[0][n - 1];
				for (j = 1; j < n; j++)
				{
					a[0][j] = a[0][j - 1];
				}

				// 最左列上移动
				for (j = 1; j < n; j++)
				{
					a[j - 1][0] = a[j][0];
				}

				// 最后一排向左移动
				for (j = 1; j < n; j++)
				{
					a[j - 1][n - 1] = a[j][n - 1];
				}

				// 最右列向下移动
				for (j = n - 2; j > 0; j--)
				{
					a[n - 1][j + 1] = a[n - 1][j];
				}

				a[n - 1][1] = t;

				// 判断是否符合条件
				// 第一行
				for (i = 0; i < n; i++)
				{
					for (j = 0; j < n; j++)
					{
						if (a[i][j] != (i - 1) * n + j)
							break;
					}
				}

				if (i == n && j == n)
				{
					printf("YES\n");
					break;
				}

			}

			if (x == n - 1)
				printf("NO\n");
		}
		

	}

	return 0;

	*/