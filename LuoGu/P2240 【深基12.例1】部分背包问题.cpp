// P2240 【深基12.例1】部分背包问题

/*
# include <cstdio>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 110

struct Gold {
	int m;
	int v;
}g[N];

bool myCmp(const Gold& g1, const Gold& g2)
{
	return (g1.v / g1.m) > (g2.v / g2.m);
}

int main()
{
	int n;
	double t;
	int i, j;
	double max;

	while (scanf("%d%lf", &n, &t) != EOF)
	{
		max = 0.0;

		for (i = 0; i < n; i++)
			scanf("%d%d", &g[i].m, &g[i].v);

		sort(g, g + n, myCmp);

		for (i = 0; i < n; i++)
		{
			if (t - g[i].m >= 0)
			{
				max += g[i].v;
				t -= g[i].m;
			}
			else
			{
				max +=1.0 * t * g[i].v /( g[i].m*1.0);
				break;
			}
		}

		printf("%.2lf\n", max);
	}

	return 0;
}
*/