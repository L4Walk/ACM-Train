// R - Number Sequence

/*
# include <stdio.h>

int main()
{
	long long a, b;
	long long n;
	long long i;
	long long res[3];

	res[0] = res[1] = 1;

	while (scanf("%lld%lld%lld", &a, &b, &n) != EOF && a + b + n != 0)
	{
		for (i = 2; i < n; i++)
		{
			res[2] = (a * res[1] + b * res[0]) % 7;

			res[0] = res[1];
			res[1] = res[2];
		}

		printf("%lld\n", res[2]);
		
		res[0] = res[1] = 1;

	}

	return 0;
}
*/