// P5719 【深基4.例3】分类平均

/*
# include <stdio.h>

int main()
{
	int n, k, numA = 0, numB = 0;
	double sumA = 0, sumB = 0;
	int i;

	scanf("%d%d", &n, &k);

	for (i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			sumA += i;
			numA++;
		}
		else 
		{
			sumB += i;
			numB++;
		}
	}

	printf("%.1f %.1f", sumA / numA, sumB / numB);

	return 0;
}
*/