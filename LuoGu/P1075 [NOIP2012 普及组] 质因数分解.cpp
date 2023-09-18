// P1075 [NOIP2012 普及组] 质因数分解

/*
# include <stdio.h>
# include <math.h>
# include <memory.h>

bool book[100000001];
void prime(long long n)
 {
	 //初始化，默认全部都是质数
	 memset(book, true, sizeof(book));
	 book[1] = false;  //1不是质数

	 for (long long i = 2; i <= sqrt(n); i++)
	 {
		 if (book[i])
		 {
			 for (int j = 2; j <= n / i; j++)
				 book[i * j] = false;  // i*j<=b
		 }
	 }
 }

int main()
{
	 long long n, i;

	scanf("%lld", &n);
	prime(n);

	for (i = n; i >= 1; i--)
	{
		if (book[i])
		{
			if ((book[n / i]) && (n / i * i == n))
			{
				printf("%lld", i);

				return 0;
			}
		}
	}

}

--------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			printf("%d", n / i);
			return 0;
		}
	}
}
*/