// 41: 数字三角形

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <iostream>
using namespace std;

# define MAX 110

int main()
{
	int n;
	int a[MAX][MAX] = { 0 };
	int dp[MAX][MAX] = { 0 };
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				scanf("%d", &a[i][j]);
		}

		// 最底层
		for (i = 1; i < n; i++)
			dp[n][i] = a[n][i];
		
		for (i = n - 1; i > 0; i--)
		{
			for (j = 1; j <= i; j++)
				dp[i][j] = max(dp[i + 1][j] + a[i][j], dp[i + 1][j + 1] + a[i][j]);
		}

		printf("%d\n", dp[1][1]);
	}

	return 0;
}
*/