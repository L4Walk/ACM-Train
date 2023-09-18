// P2241 统计方形（数据加强版）

# include <iostream>

# define rep(i,a,n) for(int i=a;i<n;i++)
# define per(i,a,n) for(int i=n - 1;i>=a;i--)

int  main()
{
	int n, m;
	int square, rectangle;
	int i, j;

	while (scanf("%d%d", &n, &m) != EOF)
	{
		if (n > m)
		{
			int t = n; n = m; m = t;
		}

		square = rectangle = 0;

		// 正方形
		for (i = n, j = m; i > 0; j--, i--)
			square += i * j;

		// 长方形 rectangle =1.0* n * m * (n + 1) * (m + 1) / 4 - square;
		int a = (1 + n) * n / 2;
		for (i = 1; i <= m; i++)
			rectangle += i * a;

		rectangle -= square;

		printf("%d %d", square, rectangle);
	}

	return 0;
}