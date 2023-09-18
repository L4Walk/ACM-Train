// I	史莱姆

/*
# include <stdio.h>
# include <math.h>
# include <iostream>
# include <vector>
# include <set>
using namespace std;

vector<long>slime;
vector<long>slime_split;

long split(long n, long* a, long* b);

int main()
{
	long n;
	
	while (scanf("%ld", &n) != EOF)
	{
		long long cnt = 0;
		long* a, * b;
		// 存放进去
		slime.push_back(n);

		split(n, a, b);

		slime.clear()
	}

	return 0;
}

long split(long n,long *a,long *b)
{
	long i, j;

	i = j = sqrt(n);
	for (i = sqrt(n); i > 0; i--)
	{
		for (j = sqrt(n); j < n; j++)
		{
			if (i * j == n)
				break;
		}
	}

}


# include <stdio.h>
# include <math.h>

int ifCould(long long n);

int main()
{
	long long n;
	while (scanf("%lld", &n) != EOF)
	{
		long long cnt = 0;
		while (ifCould(n) && n != 0)
		{
			cnt++;
			n = sqrt(n);
		}
		
		printf("%.lf\n", pow(2, cnt));
	}

	return 0;
}

int ifCould(long long n)
{
	long long a = sqrt(n);
	long long b = a * a;
	if (a * a == n)
		return 1;
	else
		return 0;
}
*/