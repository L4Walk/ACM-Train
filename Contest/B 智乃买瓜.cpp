// B	ÖÇÄËÂò¹Ï

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

# define rep(i,a,n) for(int i=a;i<n;i++)


vector<int>w;

int main()
{
	int n, m;
	int t;
	int i, j;
	int sum_w;
	int cnt;
	scanf("%d%d", &n, &m);
	
	rep(i, 0, n)
	{
		scanf("%d", &t);
		w.push_back(t / 2);
		w.push_back(t / 2);
	}

	sort(w.begin(), w.end());

	if (w[0] / 2 > m)
	{
		rep(i, 0, m)
			printf("0 ");

	}
	else
	{
		rep(i, 0, m)
		{
			cnt = 0;
			rep(j, 0, n)
			{
				sum_w = 0;
				t = 0;
				while (sum_w < i+1)
				{
					sum_w += w[t];
				}

				if (sum_w == i+1)
					cnt++;
			}

			printf("%d ", cnt % 1000000007);
		}

	}

	return 0;
}
// B	ÖÇÄËÂò¹Ï

# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

# define rep(i,a,n) for(int i=a;i<n;i++)


vector<int>w;

int main()
{
	int n, m;
	int t;
	int i, j;
	int sum_w;
	int cnt;
	scanf("%d%d", &n, &m);
	
	rep(i, 0, n)
	{
		scanf("%d", &t);
		w.push_back(t / 2);
		w.push_back(t / 2);
	}

	sort(w.begin(), w.end());

	if (w[0] / 2 > m)
	{
		rep(i, 0, m)
			printf("0 ");

	}
	else
	{
		rep(i, 0, m)
		{
			cnt = 0;
			rep(j, 0, n)
			{
				sum_w = 0;
				t = 0;
				while (sum_w < i+1)
				{
					sum_w += w[t];
				}

				if (sum_w == i+1)
					cnt++;
			}

			printf("%d ", cnt % 1000000007);
		}

	}

	return 0;
}
*/