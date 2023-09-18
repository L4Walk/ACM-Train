// C	Ð¡É³µÄÉ±Çò

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
using namespace std;

vector<vector<int>> dp;

int main()
{
	int x, a, b;
	int cnt;
	int len;
	int i, j;
	string ball;

	scanf("%d%d%d", &x, &a, &b);
	cin >> ball;

	len = ball.size();
	dp.push_back(x);
	cnt = 0;

	for (i = 1; i <= len; i++)
		for(j=i;i<=len;j++)
	{
		if (ball[i - 1] == '0')
			dp.push_back(dp[i - 1] + b);
		else
			dp.push_back(max(dp[i - 1] - a, dp[i - 1] + a));

		if (dp[i] == dp[i - 1] + a)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}
*/