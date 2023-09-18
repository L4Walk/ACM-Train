// 44: Robberies

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 10005

struct Bank {
	int m;
	double p;
}bank[MAX];

int main()
{
	int T;
	int N;
	double P;
	int m[MAX];
	double p[MAX];
	double dp[MAX];
	int sum;
	int i, j;

	while (scanf("%d", &T) != EOF)
	{
		while (T--)
		{
			scanf("%lf%d", &P, &N);

			// memset(m, 0, sizeof(m));
			// memset(p, 0, sizeof(p));
			memset(dp, 0, sizeof(dp));

			sum = 0;

			for (i = 1; i <= N; i++)
			{
				scanf("%d%lf", &m[i], &p[i]);
				sum += m[i];
			}

			dp[0] = 1;

			for (i = 1; i <= N; i++)
			{
				for (j = sum; j >= m[i]; j--)
				{
					dp[j] = max(dp[j], dp[j - m[i]] * (1 - p[i]));
				}
			}

			for (i = sum; i >= 0; i--)
			{
				if (dp[i] > (1 - P))
				{
					printf("%d\n", i);
					break;
				}
			}
		}

	}


	return 0;
}
*/