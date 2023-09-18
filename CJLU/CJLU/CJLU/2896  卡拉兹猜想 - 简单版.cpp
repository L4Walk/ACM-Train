// 2896: ¿¨À­×È²ÂÏë - ¼òµ¥°æ

/*
# include <stdio.h>

int main()
{
	long long n, count;
	long long a[281];

	scanf("%lld", &n);

	a[0] = n;
	count = 1;

	if (n == 1)
		printf("1");
	else
	{
		do
		{
			if (n % 2 == 0)
				a[count] = n /= 2;
			else
				a[count] = n = 3 * n + 1;

			count++;
		} while (a[count - 1] != 1);

		for (int i = count - 1; i >= 0; i--)
			printf("%lld ", a[i]);
	}

	return 0;
}
*/