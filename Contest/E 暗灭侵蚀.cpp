// E	°µÃðÇÖÊ´

/*
# include <cstdio>
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

vector<long>point;

int main()
{
	int T;
	long a, b, c, n;
	long i, j;
	long cnt;

	while (scanf("%d", &T) != EOF)
	{
		while (T--)
		{
			scanf("%ld%ld%ld%ld", &a, &b, &c, &n);
			cnt = 0;;
			point.clear();

			point.push_back(a);
			point.push_back(b);
			point.push_back(c);

			sort(point.begin(), point.end());

			while (point[2] < n)
			{
				point[0] = point[2] * 2 - point[0];
				sort(point.begin(), point.end());
				cnt++;
			}

			printf("%d\n", cnt);

		}

	}

	

	return 0;
}
*/