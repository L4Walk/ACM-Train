// S - 求数列的和

/*
# include <stdio.h>
# include <math.h>

int main()
{
	double n, m;
	double ans=0.0;

	while (scanf("%lf%lf", &n, &m) != EOF)
	{
		ans = n;
		m--;

		while (m > 0)
		{
			n = sqrt(n);
			ans += n;

			m--;
		}

		printf("%.2lf\n", ans);
	}

	return 0;
}
*/