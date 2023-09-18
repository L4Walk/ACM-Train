// 2901: 开灯问题 - 简单版

/*
# include <stdio.h>
# include <string.h>
int main()
{
	int a[1010] = { 0 };
	int n, k;
	int i, j;
	int f;

	while (scanf("%d%d", &n, &k) != EOF)
	{
		memset(a, 0, sizeof(a));
		
		for ( i = 2; i <= k; i++)
		{
			for ( j = 1; (j * i )<= n; j++)
			{
				a[j * i] = 1 - a[j * i];
			}
		}

		f = 1;
		for (i = 1; i < n + 1; i++)
		{
			if (a[i] == 0)
			{
				if (f == 1)
				{
					printf("%d", i);
					f = 0;
				}
				else
					printf(" %d", i);
			}
		}
		printf("\n");
	}

	return 0;
}
*/