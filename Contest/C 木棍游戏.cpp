// C	д╬╧Всно╥

/*
# include <cstdio>
# include <cstring>
# include <cmath>
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

# define N 8
# define m 3
int main()
{
	int n;
	int l[N];
	int a, b, c;
	int i, j, k;
	double s;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &l[i]);

	sort(l, l + n);

	if (n == 3)
	{
		if (l[0] + l[1] <= l[2])
			printf("-1");
		else
		{
			a = l[0]; b = l[1]; c = l[2];
			double p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("%.1lf\n", s);

		}
	}
	else
	{
		vector<vector<long long>> f(n + 1, vector<long long>(m + 1, 0));
		vector<long long> sub(n + 1, 0);

		
		sub[0] = 0;
		for (i = 0; i < n; i++)
			sub[i + 1] = sub[i] + l[i];

		f[0][0] = 0;

		for(i=1;i<=n;i++)
			for (j = 1; j <= min(i, 3); j++)
				for (k = 0; k < i; k++)
					f[i][j] = min(f[i][j], max(f[k][j - 1], sub[i] - sub[k]));

		a = f[n][m];
		b = f[n][m - 1];
		c = f[n][m - 2];

		if (l[0] + l[1] <= l[2])
			printf("-1");
		else
		{
			a = l[0]; b = l[1]; c = l[2];
			double p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("%.1lf\n", s);
		}
	}

	return 0;
}
*/