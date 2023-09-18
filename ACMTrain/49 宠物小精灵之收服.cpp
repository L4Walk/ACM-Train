// 49: 宠物小精灵之收服

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 1010

int dp[N][N];

int bull[N], hurt[N];

int main()
{
	int n,m,k;
	int c, r;
	int i, j, t;

	while (scanf("%d%d%d", &n, &m, &k) != EOF)
	{
		memset(dp, 0, sizeof(dp));
		memset(bull, 0, N);
		memset(hurt, 0, N);

		for (i = 1; i <= k; i++)
			scanf("%d%d", &bull[i], &hurt[i]);

		for (i = 1; i <= k; i++)
			for (j = n; j >= 1; j--)
				for (t = m; t >= 1; t--)
					if (j >= bull[i] && t > hurt[i])
						dp[j][t] = max(dp[j][t], dp[j - bull[i]][t - hurt[i]] + 1);

		for (i = m - 1; i >= 1; i--)
			if (dp[n][m] != dp[n][i])
				break;

		printf("%d %d\n", dp[n][m], m - i);

	}
	return 0;
}
*/