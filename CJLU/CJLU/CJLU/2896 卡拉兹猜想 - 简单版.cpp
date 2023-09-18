// 2896: 卡拉兹猜想 - 简单版

/*
# include <stdio.h>

int main()
{
	int n, count;

	count = 0;

	while (scanf("%d", &n) != EOF)
	{
		while (n > 1)
		{
			if (n % 2 == 0)
				n /= 2;
			else
				n = (3 * n + 1) / 2;

			count++;

			if (n != 1)
				printf("%d ", n);
			else
				printf("1");
		}

		printf("\n%d", count);

		count = 0;
	}

	return 0;
}
*/