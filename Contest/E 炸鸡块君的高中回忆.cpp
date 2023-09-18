// E	炸鸡块君的高中回忆

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

long n, m, cnt;
int fact(long n, long  m);
int main()
{
	int T;
	//long n, m;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%ld%ld", &n, &m);
		
		if (n == m)
			printf("1\n");
		else if (m == 1)
			printf("-1\n");
		else
		{
			cnt = n / (m - 1);
			n = n - cnt * (m - 1);

			if (n < m)
				cnt++;
			else if(n == m)
				cnt--;

			printf("%d\n", cnt);
		}

	}

	return 0;
}

*/