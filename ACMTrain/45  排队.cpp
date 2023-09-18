// 45: 排队

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 50010

int main()
{
	int n;
	int maxx;
	int h[MAX];
	int see[MAX];
	int first_pos[MAX];
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		memset(h, 0, sizeof(h));
		memset(first_pos, 0, sizeof(first_pos));
		memset(see, 0, sizeof(see));

		for (i = 1; i <= n; i++)
			scanf("%d", &h[i]);

		maxx = 0;
		for (i = 1; i <= n; i++)
		{
			for (j = i - 1; j > 0 && h[j] <= h[i]; j = first_pos[j]);//这个点一定要注意
				first_pos[i] = j;

				if (first_pos[i] == 0)
					see[i] = 0;
				else
					see[i] = see[j] + 1;
				if (see[i] > maxx)
					maxx = see[i];
		}

		printf("%d\n", maxx);
	}

	return 0;
}
*/