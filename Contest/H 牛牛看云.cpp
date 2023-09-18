// H	Å£Å£¿´ÔÆ

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

vector<int>a;
vector<int>b;
int main()
{
	int n;
	int temp;
	int i, j;
	long sum;

	while (scanf("%d", &n) != 0)
	{
		sum = 0;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			temp -=500;
			a.push_back(temp);

		}

		sum = 0;
		b[0] = a[0];
		for (i = 1; i <= n; i++)
		{
			b[i] = b[i - 1] + a[i];
		}

		printf("%ld\n", b[n - 1]);
	}

	return 0;
}
*/