// P3741 honokaµÄ¼üÅÌ

/*
# include <stdio.h>

int main()
{
	int n, sum = 0;
	int f = 1;
	char s[101];

	scanf("%d", &n);

	scanf("%s", &s);

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'V')
		{
			if (s[i + 1] == 'K')
			{
				sum++;
				i++;
			}
			else if ((s[i + 1] == 'V') && (f == 1))
			{
				sum++;
				i++;
				f = 0;
			}
		}
		else if (s[i] == 'K')
		{
			if ((s[i + 1] == 'K') && (f == 1))
			{
				sum++;
				i++;
				f = 0;
			}
		}
	}

	printf("%d", sum);

	return 0;
}
*/