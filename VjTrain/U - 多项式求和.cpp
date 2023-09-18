// U - 多项式求和

/*
# include <stdio.h>

int main()
{
	int m, n, i;
	double ans= 1.0;

	scanf("%d", &m);

	while (m > 0)
	{
		scanf("%d", &n);

		for ( i = 2; i <= n; i++)
		{
			if (i % 2 == 0)
				ans -= 1.0 / i;
			else
				ans += 1.0 / i;
		}

		printf("%.2lf\n", ans);

		ans = 1;

		m--;
	}


	return 0;
}
*/