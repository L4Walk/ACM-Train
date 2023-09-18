// 5: ÍÚ±¦ÓÎÏ·

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 10010

int dp[N];

int main()
{
	int n, m;
	int a[N];
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		memset(a, 0, sizeof(a));
		memset(dp, 0, sizeof(dp));

		for (i = 1; i <= n; i++)
			scanf("%d", &a[i]);

		dp[1] = a[1];
		
		for (i = 2; i <= n; i++)
			dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);

		printf("%d\n", dp[n]);
	}

	return 0;
}
*/