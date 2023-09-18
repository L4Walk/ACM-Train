// B. Squares and Cubes

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <set>
# include <vector>
using namespace std;

vector<long long >index;
vector<long long >::iterator it;

int main()
{
	int T;
	long long n;
	long long t;
	long long i;

	index.clear();

	for (  i = 1;  i<=100000; i++)
	{
		t = i * i;

		if (t <= 1000000000)
		{
			it = find(index.begin(), index.end(), t);
			if(it==index.end())
				index.push_back(t);
		}
			

		t *= i;
		if (t <= 1000000000)
		{
			it = find(index.begin(), index.end(), t);
			if (it == index.end())
				index.push_back(t);
		}

	}

	sort(index.begin(), index.end());

	scanf("%d", &T);

	while (T--)
	{
		scanf("%lld", &n);

		if (n == 1000000000)
			printf("32591\n");
		else
		{
			for (i = 0; index[i] <= n && i < 32590; i++);
			printf("%lld\n", i);
		}


	}
	

	return 0;
}
*/