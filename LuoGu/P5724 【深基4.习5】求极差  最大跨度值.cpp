// P5724 �����4.ϰ5���󼫲� �����ֵ

/*
# include <stdio.h>

int main()
{
	int n, temp, min, max;
	int i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &temp);

		if (i == 1)
		{
			min = max = temp;
		}
		else
		{
			if (temp > max)
				max = temp;
			else if (temp < min)
				min = temp;
		}
	}

	printf("%d", max - min);

	return 0;
}
*/