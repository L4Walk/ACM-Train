// E 血战

/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

vector<long long>a;
vector<long long>b;
vector<long long>c;
vector<long long>::iterator it;

int main()
{
	int n, m;
	long long x;
	long long temp;
	int i, j;

	while (scanf("%d%d%lld", &n, &m, &x) != EOF)
	{
		a.clear();
		b.clear();
		c.clear();


		for (i = 0; i < n; i++)
		{
			scanf("%lld", &temp);
			a.push_back(temp);	
		}
		for (i = 0; i < n; i++)
		{
			scanf("%lld", &temp);
			b.push_back(temp);
			c.push_back( temp - a[i]);
		}

		sort(c.rbegin(), c.rend());

		for (i = 0; i < m && x > 0; i++)
		{
			x += c[i];
		}
	
		if (x <= 0 || i != m)
			printf("-1\n");
		else
			printf("%lld\n", x);
	}

	return 0;
}
*/