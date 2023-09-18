/*
# include <iostream>
# include <algorithm>
using namespace std;

# define N 31
# define M 201

struct A {
	int w;
	int c;
}a[N];


int main()
{
	int m, n;
	
	while (scanf("%d%d", &m, &n) != EOF) {
		for (int i = 1; i <= n; i++) {
			scanf("%d%d", &a[i].w, &a[i].c);
		}

		int dp[N][N];

		for (int i = 1; i <= n; i++) {
			for (int v = m; v > 0; v--) {
				if (a[i].w > v)
					dp[i][v] = dp[i - 1][v];
				else
					dp[i][v] = max(dp[i - 1][v], dp[i - 1][v - a[i].w] + a[i].c);
			}
		}

		printf("%d\n", dp[n][m]);
	}

	return 0;
}
*/