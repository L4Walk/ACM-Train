// P1554 梦中的统计

/*
# include <stdio.h>

int main()
{
	long long m, n;
	int a[10] = { 0 };
	long long i, j;
	long long tmp;

	scanf("%lld%lld", &m, &n);

	for (i = m; i <= n; i++)
	{
		tmp = i;
		
		while (tmp > 0)
		{
			a[tmp % 10]++;
			tmp /= 10;
		}
	}

	for (i = 0; i <= 9; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
*/