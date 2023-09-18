// 43: 最长公共子序列

/*
# include <cstdio>
# include <cstring> 
# include <iostream>
# include <algorithm>
using namespace std;

# define MAXLEN 1001

char a[MAXLEN], b[MAXLEN];
int dp[MAXLEN][MAXLEN], len1, len2;

void lcs(int i, int j);

int main()
{
	while (scanf("%s%s",&a,&b)!= EOF)
	{
		memset(dp, 0, sizeof(dp));

		len1 = strlen(a);
		len2 = strlen(b);

		lcs(len1, len2);
		printf("%d\n", dp[len1][len2]);
	}

	return 0;
}

void lcs(int i, int j)
{
	for (i = 1; i <= len1; i++)
	{
		for (j = 1; j <= len2; j++)
		{
			if (a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max( dp[i][j - 1], dp[i - 1][j]);
		}
	}

}
*/