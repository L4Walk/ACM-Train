// 46: ¿ª²Í¹Ý

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 10000

int main()
{
	int T;
	int n, k;
	int m[MAX], p[MAX], dp[MAX];
	int i, j;
	int ans;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d%d", &n, &k);

		for (i = 1; i <= n; i++)
			scanf("%d", &m[i]);

		for (i = 1; i <= n; i++)
		{
			scanf("%d", &p[i]);
			dp[i] = p[i];
		}

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				if (m[i] - m[j] > k)
					dp[i] = max(dp[i], dp[j] + p[i]);
			}
		}

		ans = 0;
		for (i = 1; i <= n; i++)
			ans = max(ans, dp[i]);

		printf("%d\n", ans);

	}

	return 0;
}
*/