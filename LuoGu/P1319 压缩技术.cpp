// P1319 —πÀıºº ı

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, t;
	int f = 0;
	int i, j,q;
	int** a;

	scanf("%d", &n);

	a = (int**)malloc(sizeof(int*) * n);

	for (i = 0; i < n; i++)
		a[i] = (int*)malloc(sizeof(int) * n);

	i = 0; j = 0;
	while (scanf("%d", &t) != EOF)
	{
		for (q = j; j < t; j++)
		{
			if (j >= n)
			{
				i += 1;
				j = q = 0;
			}

			a[i][q] = f;
		}

		j = q;

		f = 1 - f;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", a[i][j]);
		}

		printf("\n");
	}

	return 0;
}
*/