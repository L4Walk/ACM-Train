// 2899: º«ÐÅµã±ø - Éý¼¶°æ

/*
# include <stdio.h>

int main()
{
	int num;
	int n3, n5, n7;
	int i;
	while (scanf("%d%d%d", &n3, &n5, &n7) != EOF)
	{
		for ( i = 11; i < 100; i++)
		{
			if (i % 3 == n3 && i % 5 == n5 && i % 7 == n7)
			{
				printf("%d\n", i);
				break;
			}
		}

		if(i == 100)
			printf("No answer\n");
	}

	return 0;
}
*/






























/*
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
	int num;
	int n3, n5, n7;

	while (scanf("%d%d%d", &n3, &n5, &n7) != EOF)
	{
		n3 *= 3;
		n5 *= 5;
		n7 *= 7;
		num = lcm(lcm(n3, n5), n7);
		printf("%d\n", num);
		printf("%d\n", lcm(lcm(n3, n5), n7));
	}

	return 0;
}

int gcd(int a, int b)
{
	return !b ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b) ;
}
*/