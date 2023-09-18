// 1 Ë®ÏÉ»¨Êý

/*
# include <stdio.h>

int main()
{
	int n;

	while (scanf("%d", &n) != EOF)
	{
		switch (n)
		{
		case 3:
			printf("153\n370\n371\n407\n");
			break;
		case 4:
			printf("1634\n8208\n9474\n");
			break;
		case 5:
			printf("54748\n92727\n93084\n");
			break;
		case 6:
			printf("548834\n");
			break;
		case 7:
			printf("1741725\n4210818\n9800817\n9926315\n");
			break;
		case 8:
			printf("24678050\n24678051\n88593477\n");
			break;
		case 9:
			printf("146511208\n472335975\n534494836\n912985153\n");
			break;
		case 10:
			printf("4679307774\n");
			break;
		}
	}
	
	return 0;
}

/*
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int Narcissistic_number(int num, int n);

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = pow(10, n - 1); i < pow(10, n); i++)
	{
		if (Narcissistic_number(i, n) == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

int Narcissistic_number(int num,int n) 
{
	double a = 0;
	double temp;
	double prior;

	prior = num;

	while (num > 0)
	{
		temp = num % 10;
		a += pow(temp, n);
		num /= 10;
	}

	if (a == prior)
		return 1;
	else
		return 0;
}
*/