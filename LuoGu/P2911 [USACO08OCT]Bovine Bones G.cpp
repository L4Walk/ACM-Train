// P2911 [USACO08OCT]Bovine Bones G

/*
# include <stdio.h>

int main()
{
	int s1, s2, s3;
	int a[81] = { 0 };
	int i, j, x;
	int max = 0;
	int maxi = 3;

	scanf("%d%d%d", &s1, &s2, &s3);

	for (i = 1; i <= s1; i++)
	{
		for (j = 1; j <= s2; j++)
		{
			for (x = 1; x <= s3; x++)
			{
				a[i + j + x]++;
			}
		}		
	}
		

	for (i = 3; i <= 80; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}

	}

	printf("%d", maxi);

	return 0;
}
*/