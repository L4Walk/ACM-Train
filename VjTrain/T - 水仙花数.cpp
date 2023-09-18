// T - Ë®ÏÉ»¨Êý

/*

# include <stdio.h>

int main()
{
	int n, m;

	while (scanf("%d%d", &m, &n) != EOF)
	{
		if (m < 153)
		{
			if (n < 370 && n >= 153)
				printf("153\n");
			else if (n < 371 && n >= 370)
				printf("153 370\n");
			else if (n < 407 && n >= 371)
				printf("153 370 371\n");
			else if (n >= 407)
				printf("153 370 371 407\n");
			else
				printf("no\n");
		}
		else if (m > 153 && m <= 370)
		{
			if (n < 371 && n >= 370)
				printf("370\n");
			else if (n < 407 && n >= 371)
				printf("370 371\n");
			else if (n >= 407)
				printf("370 371 407\n");
			else
				printf("no\n");
		}
		else if (m == 371)
		{
			if (n < 407 && n >= 371)
				printf("371\n");
			else if (n >= 407)
				printf("371 407\n");
			else
				printf("no\n");
		}
		else if (m > 371 && m <= 407)
		{
			if (n >= 407)
				printf("407\n");
			else
				printf("no\n");
		}
		else
			printf("no\n");
	}

	return 0;
}
*/