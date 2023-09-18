// A ÒõÄ±

/*
# include <stdio.h>
# define MAX 200000
# include <iostream>
# include <set>
# include <vector>
# include <algorithm>
using namespace std;

vector<int> dis;
vector<int>::iterator it;

int main()
{
	long n;
	long temp;
	long sum_alien = 0, sum_pre = 0;

	while (scanf("%ld", &n) != EOF)
	{
		dis.clear();
		for (long i = 0; i < n; i++)
		{
			scanf("%ld", &temp);
			dis.push_back(temp);
		}

		sort(dis.rbegin(), dis.rend());

		sum_alien = sum_pre = 0;

		for (it=dis.begin();it!=dis.end();it=it+2)
		{
			sum_alien += *it;
			sum_pre += *(it + 1);
		}

		if (sum_alien >= sum_pre)
			printf("OMG!\n");
		else
			printf("It's all right!\n");
	}

	return 0;
}
*/