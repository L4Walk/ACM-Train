// O - ½øÖÆ×ª»»

/*
# include <stdio.h>

int main()
{
	int n;
	char result[1000];
	int cnt = 0;
	int i;
	int r;
	int t;
	int f = 0;

	while (scanf("%d%d", &n, &r) != EOF)
	{
		if (n < 0)
		{
			result[0] = '-';
			cnt++;
			n = -n;
			f = 1;
		}

		while (n > 0)
		{
			t = n % r;

			if (t > 9)
				result[cnt] = 'A' + t % 10;
			else
				result[cnt] = '0' + t;

			n /= r;

			cnt++;
		} 

		if (f == 0)
		{
			for (i = cnt - 1; i >= 0; i--)
				printf("%c", result[i]);
		}
		else
		{
			printf("%c", result[0]);

			for (i = cnt - 1; i > 0; i--)
				printf("%c", result[i]);

		}

		printf("\n");
		
		f = cnt = 0;
	}

	return 0;
}
*/