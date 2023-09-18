// A. Plus One on the Subset

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
	int T;
	int n;
	long temp;
	int i;
	long a[100];
	long max, min;
	scanf("%d", &T);

	while (T--)
	{
		scanf("%d", &n);
		//index.clear();

		memset(a, 0, sizeof(a));

		scanf("%ld", &a[0]);
		min = max = a[0];

		for (i = 1; i < n; i++)
		{
			scanf("%ld", &a[i]);

			if (a[i] > max)
				max = a[i];

			if (a[i] < min)
				min = a[i];
		}
		printf("%ld\n", max - min);
	}

	return 0;
}
*/