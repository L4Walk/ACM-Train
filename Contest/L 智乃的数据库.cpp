// L	ÖÇÄËµÄÊý¾Ý¿â

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
# include <set>
using namespace std;

# define rep(i,a,n) for(int i=a;i<n;i++)
# define pep(i,a,n) for(int i=n-1;i>=a;i--)

# define N 1010

struct DATA {
	int num[N];
}d[N];

vector<int>f;

int main()
{
	int n, m;
	//int a[N][N];
	string title[N];
	string s;
	bool idx;

	scanf("%d%d", &n, &m);

	rep(i, 0, m)
		cin >> title[i];

	rep(i, 0, n)
		rep(j, 0, m)
			scanf("%d", &d[i].num[j]);

	rep(i,0,7)
		cin >> s;

	rep(i, 0, m)
	{
		idx = s.find(title[i]);

		if (idx)
			f.push_back(i);
	}

	rep(i, 0, f.size())
		cout << f[i] << endl;


	return 0;
}
*/