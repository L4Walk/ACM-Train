// P4956 [COCI2017-2018#6] Davor
// Ò»ÐÇÆÚÎª 7x + 21k

/*
# include <stdio.h>

int main()
{
	long long n, x, k;

	scanf("%lld", &n);

	for (x = n / (7 * 52); x > 0; x--)
	{
		for (k = 1; k <= n / (21 * 52); k++)
		{
			if (((7 * x + 21 * k) * 52 == n) && (x <=100))
			{
				printf("%lld\n%lld", x, k);
				return 0;
			}	
		}
	}
}
*/