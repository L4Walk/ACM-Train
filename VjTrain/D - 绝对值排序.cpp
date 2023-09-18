// D - ¾ø¶ÔÖµÅÅÐò

/*
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
	int n;
	int* a;
	int* b;
	int i, j;
	int t;

	while (scanf("%d", &n) != EOF && n != 0)
	{
		a = (int*)malloc(sizeof(int) * n);
		b = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);

			b[i] = abs(a[i]);
		}

		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (b[j] < b[j + 1])
				{
					t = b[j + 1];
					b[j + 1] = b[j];
					b[j] = t;

					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		}

		for (i = 0; i < n - 1; i++)
		{
			printf("%d ", a[i]);
		}

		printf("%d\n", a[i]);

		free(b);
		free(a);
	}

	return 0;
}
*/