// P1980 [NOIP2013 普及组] 计数问题

/*
# include <stdio.h>

int main()
{
	int n, x, t,sum;
	int i, j;

	scanf("%d%d", &n, &x);

	sum = 0;

	for (i = 1; i <= n; i++)
	{
		j = i;

		do
		{
			t = j % 10;

			if (t == x)
				sum++;

			j = j / 10;
		} while (j != 0);
		
		
	}
	
	printf("%d", sum);

	return 0;
}
*/