// P1125 [NOIP2008 提高组] 笨小猴

/*
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char s[101];
	int t[101] = { 0 };
	int i, j, n,f;
	int max, min;
	int count = 1;

	scanf("%s", &s);

	max = 1;
	min = 100;

	for (i = 0; i <= (strlen(s) - 1); i++)
	{
		if (t[i] == 1)
			i++;
		
		for (j = i + 1; j <= strlen(s); j++)
		{
			if (t[j] == 0)
			{
				if (s[i] == s[j])
				{
					count++;
					t[j] = 1;
				}
			}
		}

		if (count > max)
			max = count;

		if (count < min)
			min = count;

		count = 1;
		t[i] = 1;

	}

	n = max - min;

	f = 1;
	i = 2;
	if (n <= 1)
		f = 0;
	else if (n == 2)
		f = 1;
	else
	{
		while ((i <= sqrt(n)) && (f == 1))
		{
			if (n % i == 0)
				f = 0;
		}
	}

	if (f == 1)
		printf("Lucky Word\n%d", n);
	else
		printf("No Answer\n0");

	return 0;
}
*/
