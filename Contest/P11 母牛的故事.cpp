// 11: Ä¸Å£µÄ¹ÊÊÂ

/*
# include <stdio.h>

int main()
{
	int n;
	int mom = 1;
	int kids = 0;
	int i;

	while (scanf("%d", &n) != 0)
	{
		if (n < 5)
			printf("%d\n", n);
		else
		{
			mom = 1;
			kids = 3;

			for (i = 5; i <= n; i++)
			{
				kids -= i / 4;
				mom++;
				kids += mom;
			}

			printf("%d\n", (mom + kids) % 10000);
		}
	}

	return 0;
}
*/