// P5723 【深基4.例13】质数口袋

/*
# include <stdio.h>
# include <math.h>

int prime(int n)
{
	int i;

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
	int l, n, sum,i;

	scanf("%d", &l);
	
	sum = n = 0;
	i = 2;

	while (sum < l)
	{
		if (prime(i) == 1)
		{
			sum += i;
			if (sum <= l)
			{
				printf("%d\n", i);
				n++;
			}
		}

		i++;
	}
	
	printf("%d", n);

	return 0;
}
*/