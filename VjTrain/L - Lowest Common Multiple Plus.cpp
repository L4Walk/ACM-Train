// L - Lowest Common Multiple Plus

/*
# include <stdio.h>
# include <stdlib.h>

int gcd(int a, int b)
{
	int t;

	if (a > b)
	{
		t = a; a = b; b = t;
	}

	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int n;
	int* a;
	int i, j;
	int k;

	while (scanf("%d", &n) != EOF)
	{
		a = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		k = 1;

		for (i = 0; i < n; i++)
		{
			k = k *a[i]/gcd(k, a[i]);
		}

		printf("%d\n", k);

		free(a);

	}

	return 0;
}
*/