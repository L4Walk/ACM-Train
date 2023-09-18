// 15: ÇÄÇÄ×·ÐÇ×å

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
# include <set>
using namespace std;

# define N 10010

set<string>star;
set<string>unstar;

struct Like {
	string name;
	int num;
}like[N];

bool myCmp(const Like& like1, const Like& like2)
{
	return like1.num > like2.num;
}

int main()
{
	int n, m;
	int t;
	int i, j;
	int sum;
	double aver;
	string ch;

	while (scanf("%d", &n) != EOF)
	{
		star.clear();
		unstar.clear();
		sum = 0;

		for (i = 0; i < n; i++)
		{
			cin >> ch;
			star.insert(ch);
		}

		scanf("%d", &m);
		for (i = 0; i < m; i++)
		{
			cin >> like[i].name >> like[i].num;

			sum += like[i].num;
		}

		aver = sum / m;
		sort(like, like + m, myCmp);

		for (i = 0; like[i].num > aver; i++)
		{
			if (!star.count(like[i].name))
				unstar.insert(like[i].name);
		}

		if (unstar.size())
			for (auto it = unstar.begin(); it != unstar.end(); it++)
				cout << *it << endl;
		else
			printf("Bing Mei You\n");
	}

	return 0;
}
*/