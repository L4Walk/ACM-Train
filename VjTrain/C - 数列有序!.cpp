// C - ÊýÁÐÓÐÐò!

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, m;
	int* a;
	int i;
	int pos_i = 0;
	int f = 1;

	while (scanf("%d%d", &n, &m) != EOF && (n + m) != 0)
	{
		a = (int*)malloc(sizeof(int) * (n + 2));

		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);

			if (a[i] > m && f == 1)
			{
				pos_i = i;
				f = 0;
			}
		}

		for (i = n - 1; i >= pos_i; i--)
		{
			a[i + 1] = a[i];
		}

		a[pos_i] = m;

		for (i = 0; i < n; i++)
			printf("%d ", a[i]);

		printf("%d\n", a[n]);

		free(a);

		pos_i = 0;
		f = 1;
	}

	return 0;
}
*/