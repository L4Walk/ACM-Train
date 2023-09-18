// P2676 [USACO07DEC]Bookshelf B

/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
	int n;
	int cnt = 0;
	long get;
	long sum = 0;
	long height;
	long milkHeight[20000];

	
	freopen("P2676_3.in", "r", stdin);
	scanf("%d %ld", &n, &height);

	// Ωµ–Ú≤Â»Î≈≈–Ú
	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &get);
		cnt++;
		for (int j = 1; j < cnt; j++)
		{
			int x = j - 1;

			while (x >= 0 && milkHeight[x] < get)
			{
				milkHeight[x + 1] = milkHeight[j];
				x--;
			}

			milkHeight[x + 1] = get;
		}
	}

	int i;
	for ( i = 0 ; i < n; i++)
	{
		sum += milkHeight[i];

		if (sum >= height)
		{
			printf("%d", i + 1 );
			break;
		}
	}

	return 0;
}
*/