// 3315: F=a0+a1*x+...anxn

/*
# include <stdio.h>
# include <string.h>
# include <iostream>
# include <vector>
using namespace std;

vector<double>num;

int main()
{
	int n;
	int i, j;
	double temp;
	double x;
	double last_x;
	double res;


	while (scanf("%d", &n) != EOF && n != -1)
	{
		num.clear();

		for (i = 0; i < n; i++)
		{
			scanf("%lf", &temp);
			num.push_back(temp);
		}

		while (scanf("%lf", &x) != EOF && x != 0.0)
		{
			last_x = 1;
			res = 0;

			for (auto i = num.begin(); i != num.end(); i++)
			{
				res += *i * last_x;
				last_x *= x;
			}

			printf("%.1lf\n", res);
		}

	}

	return 0;
}
*/