// Q - 平方和与立方和

/*
# include <stdio.h>

int main()
{
	long long n1, n2, t;
	long long i;
	long long sum1 = 0, sum2 = 0;

	while (scanf("%lld%lld", &n1, &n2) != EOF)
	{
		if (n2 < n1)
		{
			t = n2;
			n2 = n1;
			n1 = t;
		}

		for (i = n1; i <= n2; i++)
		{
			if (i % 2 == 0)
				sum1 += i * i;
			else
				sum2 += i * i * i;
		}

		printf("%lld %lld\n", sum1, sum2);

		sum1 = sum2 = 0;

	}

	return 0;
}
*/