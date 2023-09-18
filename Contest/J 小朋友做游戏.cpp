// J	Ğ¡ÅóÓÑ×öÓÎÏ·

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

# define N 10010

int dp[N][N];

vector<int>a;
vector<int>b;

int main()
{
	int T;
	int A, B, n;
	int i, j;
	int temp;
	int sum;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d%d%d", &A, &B, &n);
		sum = 0;
		a.clear();
		b.clear();

		for (i = 0; i < A; i++)
		{
			scanf("%d", &temp);
			a.push_back(temp);
		}

		for (i = 0; i < B; i++)
		{
			scanf("%d", &temp);
			b.push_back(temp);
		}

		if (2 * A - 1 < n)
			printf("-1\n");
		else
		{
			sort(a.rbegin(), a.rend());
			sort(b.rbegin(), b.rend());

			for (i = 0; i < (n + 1) / 2; i++)
			{
				sum += a[i];
			}

			j = 0;
			n -= i;
			while (n--)
			{
				if (i < A)
				{
					if (a[i] >= b[j] )
					{
						sum += a[i];
						i++;
					}
					else if (j < B)
					{
						sum += b[j];
						j++;
					}
				}
				else if ( j < B)
				{
					sum += b[j];
					j++;
				}
			}
			printf("%d\n", sum);
		}
	
	}

	return 0;
}
*/