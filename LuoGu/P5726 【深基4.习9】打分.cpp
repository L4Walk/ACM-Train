// P5726 �����4.ϰ9�����

/*
# include <stdio.h>

int main()
{
	int n;
	int score[1000];
	float sum;
	int i, j, t;

	scanf("%d", &n);

	// ����
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &score[i - 1]);
	}

	// ����
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

	// ���
	sum = 0.0;
	for (i = 1; i <= n - 2; i++)
	{
		sum += score[i];
	}

	printf("%.2lf", sum / (n - 2));

	return 0;
}
*/