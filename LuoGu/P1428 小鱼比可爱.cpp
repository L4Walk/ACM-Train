// P1428 –°”„±»ø…∞Æ

/*
# include <stdio.h>

int main()
{
	int n;
	int fish[100], compare[100];
	int i, j;

	scanf("%d", &n);

	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d", &fish[i]);
		compare[i] = 0;

		for (j = 0; j <= i - 1; j++)
		{
			if (fish[j] < fish[i])
				compare[i]++;
		}
	
		printf("%d ", compare[i]);

	}

	return 0;
}
*/