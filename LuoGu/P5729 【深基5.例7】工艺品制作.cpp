// P5729 【深基5.例7】工艺品制作

/*
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
	int w, x, h, v;
	int a[19][19][19] = { 0 };
	int q;
	int i, j, z;
	int x1, y1, z1, x2, y2, z2;

	scanf("%d%d%d", &w, &x, &h);
	scanf("%d", &q);

	v = x * h * w;

	for (i = 1; i <= w; i++)
	{
		for (j = 1; j <= x; j++)
		{
			for (z = 1; z <= h; z++)
			{
				a[i - 1][j - 1][z - 1] = 1;
			}
		}
	}

	while (q > 0)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);

		for (i = x1; i <= x2; i++)
		{
			for (j = y1; j <= y2; j++)
			{
				for (z = z1; z <= z2; z++)
				{
					if (a[i - 1][j - 1][z - 1] == 1)
					{
						a[i - 1][j - 1][z - 1] = 0;
						v--;
					}

				}
			}
		}

		q--;
	}

	printf("%d", v);

	return 0;
}
*/