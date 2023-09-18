// L	ţţѧ��·

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

int main()
{
	int T;
	int n;
	int x, y;
	char ch;
	double max, dis;

	scanf("%d", &T);

	while (T--)
	{
		x = y = 0;
		dis = max = 0.0;

		scanf("%d", &n);
		getchar();

		while (n--)
		{
			scanf("%c", &ch);

			if (ch == 'L')
				x--;
			else if (ch == 'R')
				x++;
			else if (ch == 'U')
				y++;
			else if (ch == 'D')
				y--;

			dis = sqrt(pow(x, 2) + pow(y, 2));

			if (dis > max)
				max = dis;
		}

		printf("%lf\n", max);
	}

	return 0;
}
*/