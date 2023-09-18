// P - Ñî»ÔÈý½Ç

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n;
	int** a;
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		a = (int**)malloc(sizeof(int*) * n);

		for (i = 0; i < n; i++)
			a[i] = (int*)malloc(sizeof(int) * n);

		a[0][0] = 1;

		for (i = 1; i < n; i++)
		{
			a[i][i] = a[i][0] = a[i - 1][0];

			for (j = 1; j < i; j++)
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i][0]);

			for (j = 1; j <= i; j++)
				printf(" %d", a[i][j]);

			printf("\n");
		}
		
		printf("\n");

		for (i = 0; i < n; i++)
			free(a[i]);

		free(a);

	}
	

	return 0;
}
*/

