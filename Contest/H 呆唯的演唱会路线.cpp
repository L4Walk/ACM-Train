// H 呆唯的演唱会路线

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int n, m;
	int* a;
	int i;
	int min;
	int sum;
	int t = 0;

	scanf("%d%d", &n, &m);

	while (m > 0)
	{
		a = (int*)malloc(sizeof(int) * n);
		sum = 0;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
		}

		if (t == 0)
		{
			min = sum;
			t = 1;
		}
		else if (sum < min)
			min = sum;


		free(a);
		m--;
	}

	printf("%d", min);

	return 0;
}
*/