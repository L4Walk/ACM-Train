// P1424 小鱼的航程(改进版)

/*
# include <stdio.h>


int main()
{
	int x;
	unsigned long long n, week, remainDay;
	unsigned long long distance;

	scanf("%d%lld", &x, &n);

	if ((x == 6) || (x == 7))
	{
		week = (n - 8 + x ) / 7;
		remainDay = n - week * 7 - 8 + x;
		distance = week * 250 * 5 + remainDay * 250;

		if (remainDay > 5)
			distance -= (remainDay - 5) * 250;
	}
	else
	{
		remainDay = n - 8 + x;
		week = remainDay / 7;
		remainDay = n - week * 7 - 8 + x;
		distance = week * 250 * 5 + (6 - x) * 250 + remainDay * 250;

		if (remainDay > 5)
			distance -= (remainDay - 5) * 250;
	}

	printf("%lld", distance);

	return 0;
}
*/

/*
	将小鱼游的时间分成3阶段
	阶段一：第一周w1，计算本周剩余要游的天数，如果是周六周日就是0，否则是6 - x， 第一周天数为8 - x，游的天数为6 - x；
	阶段二：完整周w2，计算有几个完整周，即总天数 - （8 - x）/  7，然后每周5天，即* 5
	阶段三：最后周w3，计算最后一周剩余要游的天数，即剩余天数 = 总天数 - 完整周 * 7 - 第一周的天数如果最后一周超过5天则为5，否则即可

*/

/*
int main()
{
	int x;
	long n, distance;
	long w1, w2, w3;

	scanf_s("%d%d", &x, &n);

	if ((x == 6) || (x == 7))
		w1 = 0;
	else
		w1 = 6 - x;

	if (n <= (8 - x))
	{
		w2 = 0;
		w3 = 0;
	}
	else if (n = (8 - x) +1)
	{
		w2 = 0;
		w3 = 1;
	}
	else
	{
		w2 = (n - 8 + x) / 7 * 5;
		w3 = n - 8 + x - (n - 8 + x) / 7 * 7;
	}
	
	if (w3 > 5)
		w3 = 5;
	
	distance = 250 * (w1 + w2 + w3);

	printf("%d", distance);

	return 0;

}

*/
