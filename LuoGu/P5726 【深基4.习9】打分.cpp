// P5726 【深基4.习9】打分

/*
# include <stdio.h>

int main()
{
	int n;
	int score[1000];
	float sum;
	int i, j, t;

	scanf("%d", &n);

	// 输入
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &score[i - 1]);
	}

	// 排序
	for (i = 0; i <= n - 1; i++)
	{
		for (j = n - 1; j >= i + 1; j--)
		{
			if (score[j] > score[j - 1])
			{
				t = score[j];
				score[j] = score[j - 1];
				score[j - 1] = t;
			}
		}
	}

	// 求和
	sum = 0.0;
	for (i = 1; i <= n - 2; i++)
	{
		sum += score[i];
	}

	printf("%.2lf", sum / (n - 2));

	return 0;
}
*/