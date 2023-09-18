// UVA1149 ×°Ïä Bin Packing

/*
# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

# define N 1e5+5;

vector<int>length;

int main()
{
	int T;
	int l, n;
	int i, j;
	int temp;
	int ans;

	scanf("%d", & T);

	while (T--)
	{
		scanf("%d", &n);
		scanf("%d", &l);

		length.clear();
		ans = 0;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			length.push_back(temp);
		}

		sort(length.begin(), length.end());

		i = 0; j = n - 1;
		while (i <= j)
		{
			if (i == j)
			{
				ans++;
				break;
			}

			if (length[i] + length[j] > l)
			{
				ans++;
				j--;
			}
			else
			{
				ans++;
				i++;
				j--;
			}

		}
		
		printf("%d\n", ans);

		if (T != 1)
			printf("\n");

	}

	return 0;
}
*/