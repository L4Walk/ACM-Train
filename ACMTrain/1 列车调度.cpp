// 1: 列车调度

/*
# include <iostream>
# include <set>
using namespace std;

set<int>line;
set<int>::iterator it;

int main()
{
	int n, t;

	while (scanf("%d", &n) != EOF)
	{
		line.clear();

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &t);

			it = line.lower_bound(t);

			if (it != line.end())
			{
				line.erase(it);
				line.insert(t);
			}
			else
				line.insert(t);
		}

		cout << line.size() << endl;

	}
	
	return 0;
}
*/