// B	Õ¨¼¦¿é¾ýÓëFIFA22

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

vector<int>a;
vector<int> sum;

int main()
{
	int n, q;
	char ch;

	long l, r, s;
	int i, j;

	scanf("%d%d", &n, &q);
	getchar();
	
	sum.push_back(0);
	a.push_back(0);
	for (i = 1; i <= n; i++)
	{
		scanf("%c", &ch);
		
		switch(ch)
		{
		case 'W':
			a.push_back(1);
			break;
		case'L':
			a.push_back(-1);
			break;
		case'D':
			a.push_back(0);
			break;
		}

		sum.push_back(sum[i - 1] + a[i]);
	}

	while (q--)
	{
		scanf("%d%d%d", &l, &r, &s);

		s += sum[r] - sum[l - 1];

		printf("%d\n", s);
	}

	return 0;
}
*/