// 20: 快速排序法

/*
# include <stdio.h>
# include <vector>
# include <set>
# include <map>
# include <iostream>
# define MAX 100000
using namespace std;

int main()
{
	long n, a[MAX], maxp[MAX];
	int min, max = 0;
	long i, j;
	long cnt = 2;
	int f = 1;	// 记录是否为pivot
	
	set<long>pivot;
	set<long>::iterator it;

	//freopen("test20.in", "r", stdin);
	while (scanf("%ld", &n) != EOF)
	{
		pivot.clear();
		max = 0;

		for (i = 0; i < n; i++)
		{
			scanf("%ld", &a[i]);
			if (a[i] > max)
			{
				max = a[i];
				maxp[i] = a[i];
			}
		}

		min = max;

		for(i=n-1;i>=0;i--)
		{
			if (a[i] <= min)
			{
				min = a[i];
				if (a[i] == maxp[i])
					pivot.insert(a[i]);
			}

		}

		printf("%d\n",pivot.size());
		
		for (it = pivot.begin(); it != pivot.end(); it++)
		{
			if (it == pivot.begin())
				cout << *it;
			else
				cout << " " << *it;
		}


		printf("\n");
	}

	return 0;
}
*/