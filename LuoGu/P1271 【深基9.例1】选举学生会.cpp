// P1271 【深基9.例1】选举学生会

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, m;
	int temp;
	int* a;
	int i;

	scanf("%d%d", &n, &m);

	a = (int*)malloc(sizeof(int) * (n+1));

	for (i = 0; i <= n; i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d", &temp);

		a[temp]++;
	}

	for (i = 0; i <= n; i++)
	{
		if (a[i] != 0)
		{
			while(a[i] != 0)
			{
				printf("%d ", i);
				
				a[i]--;
			}
		}
	}

	free(a);

	return 0;
}
*/