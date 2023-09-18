// 36: 一元三次方程

/*
#include<iostream>
# include <cmath>
using namespace std;
int main()
{
	long long n, i, a, b, c, d; double left, right, mid, mid1, mid2;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b >> c >> d;
		left = -1000; right = 0;
		mid = (left + right) / 2.0;
		mid1 = pow(mid, 3) * a + pow(mid, 2) * b + mid * c + d;
		mid2 = pow(mid + 0.00001, 3) * a + pow(mid + 0.00001, 2) * b + (mid + 0.00001) * c + d;
		while (1)
		{
			if (mid1 <= 0 && mid2 > 0)
				break;
			if (mid1 < 0)
			{
				left = mid + 1;
				mid = (left + right) / 2.0;
			}
			else {
				right = mid - 1;
				mid = (left + right) / 2.0;
			}
			mid1 = pow(mid, 3) * a + pow(mid, 2) * b + mid * c + d;
			mid2 = pow(mid + 0.00001, 3) * a + pow(mid + 0.00001, 2) * b + (mid + 0.00001) * c + d;
		}
		printf("%.3lf\n", mid);
	}
	return 0;
}
*/
/*
# include <stdio.h>
# include <math.h>

int main()
{
	long long n;
	long long a, b, c, d;
	double l, r, m;
	double sum;
	double eps = 1e-6;
	double f1, f2;
	while (scanf("%lld",& n) != EOF)
	{
		while (n--)
		{
			scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

			l = -1000.0;
			r = 0.0;

			f1 = a * pow(l, 3) + b * pow(l, 2) + c * l + d;	// 左值
			f2 = 1.0 * d;	// 右值
			m = (l + r) / 2;

			while (fabs(l - r) > eps)
			{
				m = (l + r) / 2;

				sum = a * pow(m, 3) + b * pow(m, 2) + c * m + d;

				if (fabs(sum) < eps)
				{
					printf("%.3lf", m);
				}
				else if (sum * f1 < 0)
					r = m;
				else if (sum * f2 < 0)
					l = m;
			}

			//printf("%.3lf\n", m);
		}
	}

	return 0;
}
*/
