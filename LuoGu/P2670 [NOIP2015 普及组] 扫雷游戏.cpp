// P2670 [NOIP2015 ÆÕ¼°×é] É¨À×ÓÎÏ·

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, m;
	int i, j;

	scanf("%d%d", &n, &m);

	char **a = (char**)malloc(sizeof(char*) * n);
	int** s = (int**)malloc(sizeof(int*) * n);
	for (i = 0; i < m; i++)
	{
		a[i] = (char*)malloc(sizeof(char) * m);
		s[i] = (int*)malloc(sizeof(int) * m);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%c", &a[i][j]);

			s[i][j] = 0;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == '*')
			{
				s[i][j] = '*';
				
				if (i - 1 > 0)
				{
					s[i - 1][j]++;

					if (j + 1 < m)
					{
						s[i - 1][j + 1]++;
					}

					if (j - 1 > 0)
					{
						s[i - 1][j - 1]++;
					}
				}

				if (j + 1 < m)
				{
					s[i][j + 1]++;
				}

				if (j - 1 > 0)
				{
					s[i][j - 1]++;
				}

				if (i + 1 < n)
				{
					s[i + 1][j]++;

					if (j + 1 < m)
					{
						s[i + 1][j + 1]++;
					}

					if (j - 1 > 0)
					{
						s[i + 1][j - 1]++;
					}
				}
			}
		}
	}


		

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%c", s[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		free(a[i]);
		free(s[i]);
	}
	free(a);
	free(s);

	return 0;
}
*/