// B	Å£Å£±äÄ§Êõ

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
	int T;
	long long a, b;
	long long sum;
	long long  target;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%lld%lld%lld", &a, &b,&target);

		if (a == target || b == target)
			printf("0\n");
		else if (target % 2 != 0)
			printf("-1\n");
		else
		{
			sum = a + b;

			long long  cnt = 1;
			target /= 2;

			if (sum>=target)
				printf("1\n");
			else
			{
				while (sum < target)
				{
					sum *= 2;
					cnt++;
				}
				printf("%d\n", cnt);
			}

		}

	}
	
	return 0;
}
*/