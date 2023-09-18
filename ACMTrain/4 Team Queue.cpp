// 4: Team Queue

/*
#include<algorithm>
#include <iostream>
#include<sstream>
#include<map>
#include<string>
#include<vector>
#include<set>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	int m, id, n, num = 1;
	map<int, int>teams;			//¼ÇÂ¼×éÃû£»
	queue<int>q1, q2[1010];
	string s;

	while (scanf("%d",&m) && m != 0)
	{
		teams.clear();

		for (int i = 0; i < m; i++) 
		{
			cin >> n;

			for (int j = 0; j < n; j++) 
			{
				cin >> id;
				teams[id] = i;
			}
		}

		cout << "Scenario #" << num++ << endl;

		while (cin >> s && s != "STOP")
		{

			if (s == "DEQUEUE") 
			{

				cout << q2[q1.front()].front() << endl;

				q2[q1.front()].pop();

				if (q2[q1.front()].empty())
					q1.pop();
			}
			else
			{
				cin >> id;

				if (q2[teams[id]].empty())
					q1.push(teams[id]);

				q2[teams[id]].push(id);
			}
		}
		cout << endl;
	}

	return 0;
}
*/