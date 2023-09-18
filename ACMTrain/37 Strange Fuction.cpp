// 37: Strange Fuction

/*
# include <stdio.h>
# include <math.h>

double y;
double F(double x)
{
	return  6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * pow(x, 2) - y * x;
}

double ds(double x)
{
	return 42 * pow(x, 6) + 48 * pow(x, 5) + 21 * pow(x, 2) + 10 * pow(x, 1) - y;
}

int main()
{
	int t;
	double l, r, m;
	double eps = 1e-6;

	scanf("%d", &t);

	while (t--)
	{
		scanf("%lf", &y);
		l = 0.0;
		r = 100.0;
		m = (l + r) / 2.0;

		while (r - l > eps)
		{

			if (ds(m) > 0)
				r = m;
			else
				l = m;

			m = (l + r) / 2.0;

		}

		printf("%.4lf\n", F(m));
	}

	return 0;

}
*/