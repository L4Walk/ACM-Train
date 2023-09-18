// P5738 【深基7.例4】歌唱比赛

/*
# include <stdio.h>
# include <stdlib.h>

void calculate(int a[], int len, float* finalscore);

int main()
{
	int n, m;
	float best = 0.00;
	int* score = NULL;
	int i, j;
	float finalscore;

	scanf("%d%d", &n, &m);

	score = (int*)malloc(m * sizeof(int));

	while (n > 0)
	{
		for (i = 0; i < m; i++)
		{
			scanf("%d", &score[i]);
		}

		calculate(score, m, &finalscore);

		if (finalscore > best)
			best = finalscore;

		n--;
	}

	free(score);

	printf("%.2f", best);

	return 0;
}

void calculate(int a[], int len, float* finalscore)
{
	int max, min;
	int i;
	int sum = 0;
	sum=max = min = a[0];

	for (i = 1; i < len; i++)
	{
		if (a[i] > max)
			max = a[i];

		if (a[i] < min)
			min = a[i];

		sum += a[i];
	}

	*finalscore = (sum - min - max) / (len - 2);
}
*/