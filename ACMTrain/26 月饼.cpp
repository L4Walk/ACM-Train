// 26: 月饼

/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
# include <string>
using namespace std;

struct MoonCake
{
	int rep;
	int sell;
	double per_sell;
}mooncake[1010];

bool MyCmp(const MoonCake& mooncake1, const MoonCake& mooncake2)
{
	return mooncake1.per_sell > mooncake2.per_sell;
}

int main()
{
	int n, d;
	int res;
	int i, j;
	int cnt;
	double max;

	while (scanf("%d%d", &n, &d) != EOF)
	{
		// 获取输入
		for (i = 0; i < n; i++)
		{
			scanf("%d",&mooncake[i].rep);
		}

		for (i = 0; i < n; i++)
		{
			scanf("%d", &mooncake[i].sell);
			mooncake[i].per_sell = 1.0 * mooncake[i].sell / mooncake[i].rep;
		}

		// 先对mooncake按单位价格排序
		sort(mooncake, mooncake + n, MyCmp);

		// 贪心
		i = 0;
		res = d;
		max = 0.0;
		while (res > 0)
		{
			if (res - mooncake[i].rep >= 0)
			{
				res -= mooncake[i].rep;
				max += mooncake[i].sell;
				i++;
			}
			else
			{
				max += 1.0 * mooncake[i].sell * res / mooncake[i].rep;
				break;
			}
		}
		printf("%.2lf\n", max);
	}

	return 0;
}
*/