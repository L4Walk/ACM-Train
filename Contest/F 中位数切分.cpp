// F	中位数切分

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

vector<long>a;

int main()
{
	int T;
	long n, m;
	long i, j, mid;
	long temp;
	long cnt;

	scanf("%d", &T);

	while (T--)
	{
		a.clear();
		scanf("%ld%ld", &n, &m);

		for (i = 0; i < n; i++)
		{
			scanf("%ld", &temp);
			a.push_back(temp);
		}

		sort(a.begin(), a.end());

		i = 0; j = n;
		mid = (i + j) / 2;
		while (i <= j)
		{
			mid = (i + j) / 2;

			if (a[mid] <= m)
				i = mid + 1;
			else
				j = mid - 1;
		}

		cnt = n - i * 2;

		if (cnt < 0)
			printf("-1\n");
		else
			printf("%d\n", cnt);
	}

	return 0;
}
*/