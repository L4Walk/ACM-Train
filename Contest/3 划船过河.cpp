// 3: »®´¬¹ýºÓ

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 10010

int main()
{
	int n;
	int a[N];
	int i, j;
	int time;
	int t[N];
	while (scanf("%d", &n) != EOF)
	{
		memset(a, 0, sizeof(n));
		time = 0;

		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);

		sort(a, a + n);
		
		
		time = a[0] * (n - 2);

		for (i = 1; i < n; i++)
			time += a[i];
			
		t[0] = a[0];

		for (i = 1; i < n; i++)
			t[i] = t[i - 1] + a[i];

		time = t[n - 1] - t[0];

		if (n != 1)
			printf("%d\n", time);
		else
			printf("%d\n", a[0]);
		
	}

	return 0;
}
*/