// 2900: Add N Integers

/*
#include <stdio.h>

int main()
{
	long min, max, sum, temp;
	double aver;
	int n;
	int i;
	int cnt = 0;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		cnt ++ ;
		min = max = aver = sum = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%ld", &temp);

			if (i == 0)
				max = min = temp;
			else if (temp > max)
				max = temp;
			else if (temp < min)
				min = temp;

			sum += temp;
		}

		aver = 1.0 * sum / n;

		printf("Case %d:%d %d %.3lf\n",cnt, min, max, aver);
	}
	

	return 0;
}
*/