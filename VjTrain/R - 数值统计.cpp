// R - 数值统计

/*
# include <stdio.h>

int main()
{
	int n;
	double t;
	int negative_num = 0, zero = 0, postive_num = 0;

	while (scanf("%d", &n) != EOF && n != 0)
	{
		while (n > 0)
		{
			scanf("%lf", &t);

			if (t > 0)
				postive_num++;
			else if (t < 0)
				negative_num++;
			else
				zero++;

			n--;
		}

		printf("%d %d %d\n", negative_num, zero, postive_num);

		negative_num = zero = postive_num = 0;

	}

	return 0;
}
*/