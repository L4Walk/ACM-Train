// 4: –Ú¡–ªÆ∑÷

/*
# include <cstdio>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 100010

int main()
{
	int n, m;
	int t;
	long  long a[MAX];
	long long sum[MAX], maxmin, max,tsum;
	int i, j;


	while (scanf("%d%d", &n, &m) != EOF)
	{
		t = (n + 1) / m;
		tsum = 0;
		max = 0;
		for (i = 0, j = 0; i < n; i++)
		{
			scanf("%lld", &a[i]);
			tsum += a[i];

			if (i % t == 1)
			{
				sum[j++] = tsum;
				tsum = 0;
			}

		}



	}

	

	return 0;
}
*/