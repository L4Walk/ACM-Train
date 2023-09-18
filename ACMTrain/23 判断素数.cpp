// 23: ÅĞ¶ÏËØÊı

/*
# include <stdio.h>
# include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
	int n;

	while (scanf("%d", &n) != EOF)
	{
		if (isPrime(n))
			printf("1\n");
		else
			printf("0\n");
	}
	

	return 0;
}

bool isPrime(int n)
{
	int i;

	if (n == 1)
		return false;

	if (n == 2 || n == 3)
		return true;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
			break;
		}
	}

	return true;
}
*/