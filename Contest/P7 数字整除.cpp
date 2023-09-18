// 7: Êý×ÖÕû³ý
/*
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
	 long long n;

	while (scanf("%lld", &n) != 0)
	{

		while (n > 370)
		{
			n = n / 10 - (n % 10) * 5;
		}

		if (abs(n / 10 - (n % 10) * 5) % 17 == 0)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}

	}

	return 0;
}
*/
