// V - ËØÊýÅÐ¶¨

/*
# include <stdio.h>
# include <math.h>

int prime(long long n)
{
	long long i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}

	if (i > sqrt(n))
		return 1;
	else
		return 0;
}

int main()
{
	int x, y;
	long long n;
	int i;
	int f = 1;

	while (scanf("%d%d", &x, &y) != EOF && (x + y != 0))
	{
		for (i = x; i <= y; i++)
		{
			n = i * i + i + 41;

			if (prime(n) == 0)
			{
				f = 0;
				break;
			}
		}

		if (f == 1)
			printf("OK\n");
		else
			printf("Sorry\n");

		f = 1;
	}

	return 0;
}
*/