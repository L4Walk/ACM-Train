// 2844: count bits(do)_L1

/*
# include <stdio.h>
# include <string.h>
int main()
{
	int a[10] = { 0 };
	char temp;
	while (scanf("%c", &temp) != EOF )
	{
		if (temp == '\n')
		{
			for (int i = 0; i < 10; i++)
			{
				if (a[i] != 0)
					printf("%d:%d\n", i, a[i]);
			}

			memset(a, 0,sizeof(a));

		}
		else
			a[temp - '0']++;
	}

	return 0;
}
*/