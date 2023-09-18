// 3400: ÐÂÑ§ÆÚ¼ÄÓï

/*
# include <stdio.h>
# include <iostream>
# include <string>
# include <vector>
# include <set>;
# include <algorithm>
using namespace std;

# define MAX_N 1000
# define MAX_M 10

vector<string>ban;
vector<string>banFound;
set<string>stu;
vector<string>::iterator it;

int main()
{
	int n, m;
	int i, j,x;
	int k;
	int  banSum = 0;
	string name;
	string id;
	

	while (scanf("%d%d", &n, &m) != EOF)
	{
		for (i = 0; i < m; i++)
		{
			cin >> id;
			ban.push_back(id);
		}
			
		banSum = 0;

		for (x = 0; x < n; x++)
		{
			cin >> name >> k;
			banFound.clear();
			
			for (i = 0; i < k; i++)
			{
				cin >> id;

				it = find(ban.begin(), ban.end(), id);

				if (it != ban.end())
				{
					stu.insert(name);
					banSum++;
					banFound.push_back(id);
				}
			}
			
			if (banFound.size() != 0)
			{
				cout <<name << ':';
				for (it = banFound.begin(); it != banFound.end(); it++)
					cout << ' ' << *it;

				cout << '\n';
			}
		}
		
		cout << stu.size() << ' ' << banSum << endl;

	}

	return 0;
}
*/