// Y - Å¼ÊýÇóºÍ

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, m;
	int i, j;
	int sum = 0;
	int cnt = 1;
	int t = 1;

	while (scanf("%d%d", &n, &m) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= m; j++)
			{
				if (cnt <= n)
				{
					t *= 2;
					sum += t;
					cnt++;
				}
				else
					break;
			}

			if (j > m)
				printf("%d ", sum / m);
			else
			{
				printf("%d ", sum / j);
				break;
			}

			sum = 0;
		}
		printf("\n");
		sum = 0;
		cnt = 1;
		t = 1;
	}


	return 0;
}
*/