// C ÌìÌÝÈüµÄÉÆÁ¼

/*
# include <stdio.h>
# include <stdlib.h>
int main()
{
	long n;
	long long* a;
	long i;
	long long min;
	long long max;
	long long cnt_min = 0;
	long long cnt_max = 0;

	scanf("%ld", &n);

	a = (long long*)malloc(sizeof(long long) * n);

	for (i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		if (i == 0)
		{
			min = a[i];
			max = a[i];
		}
		else if (a[i] < min)
		{
			min = a[i];
		}
		else if (a[i] > max)
		{
			max = a[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] == min)
			cnt_min++;

		if (a[i] == max)
			cnt_max++;

	}

	printf("%lld %ld\n", min, cnt_min);
	printf("%lld %ld", max, cnt_max);


	return 0;
}
*/