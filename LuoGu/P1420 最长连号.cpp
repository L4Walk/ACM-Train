// P1420 ×î³¤Á¬ºÅ

/*
# include <stdio.h>

int main()
{
	int n, i, count, max;
	long long a[10000]={ 0 };

	count = max = 1;

	scanf("%d", &n);

	for (i = 0; i <= n - 1; i++)
	{
		scanf("%lld", &a[i]);

		if (i > 0)
		{
			if ((a[i] - a[i - 1]) == 1)
				count++;
			else
			{
				if (count > max)
					max = count;

				count = 1;
			}
		}
		
	}

	printf("%d", max);

	return 0;
}
*/