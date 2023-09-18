// J 智乃的C语言模除方程

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
# define pep(i,a,n) for(int i=n-1;i>=a;i--)

int main()
{
	int P, l, r, L, R;
	int i, j;
	int cnt = 0;
	int base;
	int x;
	scanf("%d%d%d%d%d", &P, &l, &r, &L, &R);

	// 先判定左右区间的范围
	if (L >= 0)
	{
		base = R / P;

		while (base--)
		{
			rep(i, l, r)
			{
				x = base * P + i;

				if (x >= L && x <= R)
					cnt++;
			}
		}
	}


	return 0;
}
*/