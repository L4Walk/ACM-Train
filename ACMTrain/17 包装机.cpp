// 17: °ü×°»ú

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <queue>
# include <stack>;
using namespace std;

stack<char>st;

int main()
{
	char a[110][1010];
	int b[110] = { 0 };
	int x;
	int n, m, smax;
	int i, j;

	while (scanf("%d%d%d", &n, &m, &smax) != EOF)
	{
		memset(a, '0', sizeof(a));
		memset(b, 0, sizeof(b));
		
		for (i = 1; i <= n; i++)
				scanf("%s", &a[i]);

		while (scanf("%d", &x) != EOF && x != -1)
		{
			if (x == 0)
			{
				if (st.size() > 0)
				{
					printf("%c",st.top());
					st.pop();
				}
			}
			else
			{
				if (b[x] < m)
				{
					if (st.size() >= smax)
					{
						printf("%c", st.top());
						st.pop();
					}

					st.push(a[x][b[x]++]);
				}
			}
		}

	}

	return 0;
}
*/