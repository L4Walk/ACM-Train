// D. New Year's Problem

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

vector<long long>index;
vector<long long>::iterator;

int main()
{
	int T;
	int n, m;
	int i, j;
	long long temp;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d%d", &m, &n);
		index.clear();

		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
			{
				scanf("%lld", &temp);
				index.push_back(temp);
			}

		sort(index.rbegin(), index.rend());

		cout << index[i - 1] << endl;

	}

	return 0;
}
*/