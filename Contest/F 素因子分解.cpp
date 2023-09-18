// F 素因子分解

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


long isPrime(long x)
{
	long i;
	int t = 1;

	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			t = 0;
			break;
		}

	}

	return t;
}


int main()
{
	long n;
	long i;
	long cnt = 0;

	scanf("%ld", &n);

	if (isPrime(n) == 1)
		printf("%ld=%ld", n, n);
	else
	{
		printf("%ld=", n);
		for (i = 2; i <= n; i++)
		{
			if (isPrime(i) == 1) //素数分解 
			{
				while (n % i == 0)
				{
					cnt++;
					n /= i;
				}

				if (cnt == 1)
				{

					printf("%ld", i);

					if (n > 1)
						printf("*");

				}


				if (cnt > 1)
				{
					printf("%ld^%ld", i, cnt);

					if (n > 1)
						printf("*");

				}

				cnt = 0;
			}
		}
	}

	return 0;
}
*/