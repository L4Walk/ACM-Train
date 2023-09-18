// 29: Muddy roads

/*
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 100001
int a[N];

int main()
{
	int n, l;
	int i, j;
	int k, cnt;
	int num;

	while (scanf("%d%d", &n, &l) != EOF)
	{
		memset(a, 0, N);

		n *= 2;
		for (i = 1; i <= n; i += 2)
			scanf("%d%d", &a[i], &a[i + 1]);

		sort(a + 1, a + n + 1);

		k = 0;
		cnt = 0;

		for (i = 1; i <= n; i += 2)
		{
			if (k >= a[i + 1])
				continue;

			if (k > a[i])
				a[i] = k;

			num = (a[i + 1] - a[i]) / l;

			if ((a[i + 1] - a[i]) % l)
				num++;

			cnt += num;
			k = num * l + a[i];
		}

		printf("%d\n", cnt);
	}



	return 0;
}
*/