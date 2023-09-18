// Z - 数据的交换输出

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n;
	long long* a;
	long long min;
	int min_i;
	long long t;
	int i;

	while (scanf("%d", &n) != EOF && n != 0)
	{
		a = (long long*)malloc(sizeof(long long) * n);

		scanf("%lld", &a[0]);
		min = a[0];
		min_i = 0;

		for ( i = 1; i < n; i++)
		{
			scanf("%lld", &a[i]);

			if (a[i] < min)
			{
				min = a[i];
				min_i = i;
			}
		}

		t = a[0];
		a[0] = a[min_i];
		a[min_i] = t;

		for (i = 0; i < n - 1; i++)
		{
			printf("%lld ", a[i]);
		}

		printf("%lld", a[i]);
		printf("\n");

		free(a);

	}

	return 0;
}
*/