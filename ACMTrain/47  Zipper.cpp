// 47: Zipper

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

# define N 1000

string a, b, c;
int dp[N][N];
int n1, n2, n3;

int dfs(int i, int j, int k);

int main()
{
	int T;
	int cnt = 1;

	scanf("%d", &T);
	while (T--)
	{
		cin >> a >> b >> c;
		n1 = a.size();
		n2 = b.size();
		n3 = c.size();

		printf("Data set %d: ", cnt++);
		memset(dp, 0, sizeof(dp));

		if (dfs(0, 0, 0))
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}

int dfs(int i, int j, int k)
{
	if (k == n3)
		return 1;
	if (dp[i][j])
		return 0;

	if (a[i] == c[k])
		if (dfs(i + 1, j, k + 1))
			return 1;

	if (b[j] == c[k])
		if (dfs(i, j + 1, k + 1))
			return 1;

	return 0;

}
*/