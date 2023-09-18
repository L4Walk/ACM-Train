// 28: FatMouse' Trade

/*
# include <stdio.h>
# include <string.h>
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
using namespace std;

struct Room
{
	double f;
	double j;
	double per;
}room[1000];

bool MyCmp(const Room& room1, const Room& room2)
{
	return room1.per > room2.per;
}

int main()
{
	int m, n;
	int i, j;
	int tatal;
	double res;
	double max;

	while (scanf("%d%d", &m, &n) != EOF && m != -1 && n != -1)
	{
		memset(room, 0, sizeof(room));

		for (i = 0; i < n; i++)
		{
			scanf("%lf%lf", &room[i].f, &room[i].j);
			room[i].per = room[i].f / room[i].j;
		}

		sort(room, room + n, MyCmp);

		//res = 1.0 * m;
		max = 0.0;
		for (i = 0; i < n; i++) 
		{
			if (m - room[i].j >= 0)
			{
				m -= room[i].j;
				max += room[i].f;
			}
			else
			{
				max += room[i].f * (m / room[i].j);
				break;
			}

		}
		printf("%.3lf\n", max);
	}
	return 0;
}
*/