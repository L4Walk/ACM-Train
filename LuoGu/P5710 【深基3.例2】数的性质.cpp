// P5710 【深基3.例2】数的性质

#include <stdio.h>
/*
bool c1( int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

bool c2(int n)
{
	if ((n > 4) && (n <= 12))
		return 1;
	else
		return 0;
}

int main()
{
	int a, u, b, z, n;  // 小A ,Uim,八尾勇,正妹,数字n

	scanf_s("%d", &n);

	if (c1(n) && c2(n))
	{
		a = 1;
		u = 1;
		b = 0;
		z = 0;
	}
	else if ( ((c1(n) && !c2(n))) || (!c1(n) && c2(n)))
	{
		a = 0;
		u = 1;
		b = 1;
		z = 0;
	}
	else if (c1(n) || c2(n))
	{
		a = 0;
		u = 1;
		b = 0;
		z = 0;
	}
	else
	{
		a = 0;
		u = 0;
		b = 0;
		z = 1;
	}

	printf("%d %d %d %d", a, u, b, z);

	return 0;
}


int main()
{
	int a, u, b, z, n;  // 小A ,Uim,八尾勇,正妹,数字n

	scanf_s("%d", &n);

	if ( (n % 2 == 0 ) && ( (n > 4) && (n <= 12) ) )
	{
		a = 1;
		u = 1;
		b = 0;
		z = 0;
	}
	else if (((n % 2 == 0) && (!(((n > 4) && (n <= 12))))) || ((!(n % 2 == 0)) && ((n > 4) && (n <= 12))))
	{
		a = 0;
		u = 1;
		b = 1;
		z = 0;
	}
	else if ((n % 2 == 0) || ((n > 4) && (n <= 12)))
	{
		a = 0;
		u = 1;
		b = 0;
		z = 0;
	}
	else
	{
		a = 0;
		u = 0;
		b = 0;
		z = 1;
	}

	printf("%d %d %d %d", a, u, b, z);

	return 0;
}
*/
