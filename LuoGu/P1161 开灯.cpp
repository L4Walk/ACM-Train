// P1161 ¿ªµÆ

/*
# include <stdio.h>

int main()
{
	int n, t;
	double a;
	int light[2000000] = { 0 };
	int i, temp, max;

	scanf("%d", &n);

	max = 1;

	while (n > 0)
	{
		scanf("%lf%d", &a, &t);
		
		for (i = (a / 1); i <= (t * a); i++)
		{
			light[i] = 1 - light[i];
		}

		if (max < i)
			max = i;

		n--;
	}

	for (i = 0; i <= max; i++)
	{
		if (light[i] == 1)
		{
			printf("%d", i);
			
			return 0;
		}
	}


	return 0;
}
*/