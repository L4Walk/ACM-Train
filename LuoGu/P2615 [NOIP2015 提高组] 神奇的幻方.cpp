// P2615 [NOIP2015 提高组] 神奇的幻方

/*
# include <stdio.h>

int main() 
{
	int n;
	int a[40][40];
	int i, j, x;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}

	a[0][n / 2] = 1;
	i = 0;
	j = n / 2;

	for (x = 2; x <= n * n; x++)
	{
		i -= 1;
		j += 1;

		if ((i < 0) && ((j - 1) < (n - 1)))
		{
			i = n - 1;
		}

		if ((j > n - 1) && (i >= 0))
		{
			j = 0;
		}
	
		if ((i < 0) && (j = n ))
		{
			i += 2;
			j -= 1;
		}

		if (a[i][j] > 0)
		{
			i += 2;
			j -= 1;
		}

		a[i][j] = x;

	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	return 0;
}
*/
