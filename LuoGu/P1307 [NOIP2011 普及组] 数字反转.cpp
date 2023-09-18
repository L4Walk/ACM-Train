// P1307 [NOIP2011 普及组] 数字反转

/*
# include <stdio.h>

int main()
{
	long long n1;
	long long result = 0;
	scanf("%lld", &n1);

	if (n1 < 0)
	{
		n1 = -n1;
		while (n1 != 0)
		{
			result = result * 10 + n1 % 10;
			n1 /= 10;
		}
		printf("%lld", -result);
	}
	else
	{
		while (n1 != 0)
		{
			result = result * 10 + n1 % 10;
			n1 /= 10;
		}
		printf("%lld", result);
	}

	return 0;
}
*/