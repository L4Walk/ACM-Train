// P1614 °®Óë³îµÄĞÄÍ´

/*
# include <stdio.h>

int main()
{
	int n, m;
	int a[3000] = { 0 };
	int i, j;
	int min, sum;

	scanf("%d%d", &n, &m);

	for (i = 0; i <= n - 1; i++)
		scanf("%d", &a[i]);


	for (i = 0; i <= n - m; i++)
	{
		sum = 0;

		for (j = i; j <= i + m - 1; j++)
		{
			sum += a[j];
		}

		if (i == 0)
			min = sum;
		else if (sum < min)
			min = sum;
	}

	printf("%d", min);

	return 0;
}
*/