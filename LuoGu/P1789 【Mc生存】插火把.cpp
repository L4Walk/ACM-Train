// P1789 【Mc生存】插火把

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, m, k;
	int master = 0;
	int q,i,j,x,y;
	int** space;

	scanf("%d%d%d", &n, &m, &k);

	// 申请二维数组存放方块数
	space = (int**)malloc(sizeof(int*) * n);

	for(i=0;i<n;i++)
		space[i] = (int*)malloc(sizeof(int) * n);

	// 火把
	for (q = 1; q <= m; q++)
	{
		scanf("%d%d", &x, &y);

		if (x > 0)
			x -= 1;
		if (y > 0)
			y -= 1;

		space[x][y] = 1;

		
		if (x - 1 >= 0)
		{
			space[x - 1][y] = 1;

			if(y - 1 >=0)
				space[x - 1][y - 1] = 1;

			if (y+1 < n)
				space[x - 1][y + 1] = 1;

		}
			

		if (x - 2 >= 0)
			space[x - 2][y] = 1;

		if (x + 1 < n)
		{
			space[x + 1][y] = 1;

			if (y - 1 >= 0)
				space[x + 1][y - 1] = 1;

			if (y + 1 < n)
				space[x + 1][y + 1] = 1;
		}


		if (x + 2 < n)
			space[x + 2][y] = 1;

		if (y - 1 >= 0)
			space[x][y - 1] = 1;

		if (y - 2 >= 0)
			space[x][y - 2] = 1;

		if (y + 1 < n)
			space[x][y + 1] = 1;

		if (x + 2 < n)
			space[x][y + 2] = 1;
	}

	// 萤石
	if (k != 0)
	{
		for (q = 1; q <= k; q++)
		{
			scanf("%d%d", &x, &y);
			if (x > 0)
				x -= 1;
			if (y > 0)
				y -= 1;

			for (i = x - 2; i <= x + 2; i++)
			{
				while (i < 0)
				{
					i++;
				}

				if (i >= n)
					break;

				for (j = y - 2; j <= y + 2; j++)
				{
					while (j < 0)
					{
						j++;
					}

					if (j >= n)
						break;

					space[i][j] = 1;
				}
			}
		}
	}
	

	// 统计
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (space[i][j] != 1)
				master++;
		}
	}

	printf("%d", master);

	// 释放内存
	for (i = 0; i < n; i++)
		free(space[i]);

	free(space);

	return 0;
}
*/