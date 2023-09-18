// 42: ´óµÁ°¢¸£

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 100000

int main()
{
	int T;
	int n;
	int shop[MAX];
	int dp[MAX];
	int i, j;
	
	scanf("%d", &T);

	while (T--)
	{
		scanf("%d", &n);
		memset(dp, 0, sizeof(dp));

		for (i = 1; i <= n; i++)
			scanf("%d", &shop[i]);

		dp[1] = shop[1];

		for (i = 2; i <= n; i++)
			dp[i] = max(dp[i - 1], dp[i - 2] + shop[i]);

		printf("%d\n", dp[n]);
	}

	return 0;
}

*/