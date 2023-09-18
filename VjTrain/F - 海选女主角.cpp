// F - 海选女主角

/*
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
	int n, m;
	int** a;
	int i, j;
	int max = 0;
	int pos_i = 0, pos_j = 0;

	while (scanf("%d%d", &m, &n) != EOF && (m + n) != 0)
	{
		a = (int**)malloc(sizeof(int*) * m);

		for (i = 0; i < m; i++)
		{
			a[i] = (int*)malloc(sizeof(int) * n);
		}

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &a[i][j]);

				if (abs(a[i][j]) > max)
				{
					max = abs(a[i][j]);
					pos_i = i;
					pos_j = j;
				}
			}
		}

		printf("%d %d %d\n", pos_i + 1, pos_j + 1, a[pos_i][pos_j]);

		max = 0;
		pos_i = 0, pos_j = 0;

		for (i = 0; i < m; i++)
		{
			free(a[i]);
		}

		free(a);

	}

	return 0;
}
*/