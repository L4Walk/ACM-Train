/*
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

vector<int>a;

int main()
{
	int n, m;
	int p, q;
	int i, j;

	while (scanf("%d%d", &n, &m) != EOF) {
		a.clear();

		for (i = 0; i < n; i++)
			a.push_back(i + 1);

		for (i = 0; i < m; i++) {
			scanf("%d%d", &p, &q);

			if (p == 0)
				sort(a.begin(), a.begin() + q);
			else
				sort(a.rbegin(), a.rbegin() - q + 1 );
		}

		for (i = 0; i < n; i++)
			cout << a[i] << " ";
	}


	return  0;
}
*/