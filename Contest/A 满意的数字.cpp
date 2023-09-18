//A ÂúÒâµÄÊı×Ö

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <set>
# include <vector>
using namespace std;

vector<int>index;
vector<int>temp;
vector<int>::iterator iter;

void pre()
{
	int i, j, n;

	for (n = 1; n <= 1000; n++)
	{
		temp.clear();

		for (i = 1; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				temp.push_back(i);
				temp.push_back(n / i);
			}
		}

		int len = temp.size() - 1;

		sort(temp.begin(), temp.end());

		if (temp[len] % temp[(len + 1) / 2] == 0)
			index.push_back(n);
	
	}

}

int main()
{
	int T;
	int n;
	int cnt;
	
	pre();

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d", &n);

		iter = find(index.begin(),index.end(),n);

		cout << (iter - index.begin()+ 1)<< endl;
	}

	return 0;
}

*/