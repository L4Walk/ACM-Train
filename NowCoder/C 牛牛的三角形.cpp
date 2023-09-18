// C	Å£Å£µÄÈý½ÇÐÎ

/*
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
# define N 100
# define rep(i,a,n) for(int i=a;i<=n;i++)
# define pb push_back
vector<int>num;

bool isT(int a, int b, int c);

int main()
{
	int n;
	int i;
	int t;

	scanf("%d", &n);

	rep(i, 1, n)
	{
		scanf("%d", &t);
		num.push_back(t);
	}

	sort(num.rbegin(), num.rend());

	for (i = 0; i < n - 2; i++)
		if (isT(num[i], num[i + 1], num[i + 2]))
		{
			printf("%d %d %d", num[i + 2], num[i + 1], num[i]);
			break;
		}

	if (i == n - 2)
		printf("No solution");

	return 0;
}

bool isT(int a, int b, int c)
{
	if (a < b + c)
		return 1;
	else
		return 0;
}
*/