// X - 青年歌手大奖赛_评委会打分

/*
# include <stdio.h>

int main()
{
	int n1,n2;
	double max = 0, min = 0, t = 0, sum = 0;

	while (scanf("%d", &n1) != EOF)
	{
		n2 = n1;
		
		scanf("%lf", &t);

		sum += t;

		max = min = t;

		n2--;

		while (n2 > 0)
		{
			scanf("%lf", &t);

			if (t > max)
				max = t;

			if (t < min)
				min = t;

			sum += t;

			n2--;
		}

		printf("%.2lf\n", (sum - min - max) / (n1 - 2));

		sum = 0;

	}

	return 0;
}
*/