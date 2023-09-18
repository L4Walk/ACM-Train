// C - hhgg爱Java

/*
# include <stdio.h>
# include <stdio.h>
# include <string>
# include <vector>
# include <map>
# include <set>
# include <iostream>
# include <algorithm>
using namespace std;

set<string>name;
map<string, int>res;
map<string, int>mark;
typedef pair<string, int> PAIR;

bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {
	return lhs.second < rhs.second;
}

struct CmpByValue {
	bool operator()(const PAIR& lhs, const PAIR& rhs) {
		return lhs.second < rhs.second;
	}
};

int main()
{
	int n;
	char str[15];
	int t;

	while (scanf("%d", &n) != EOF)
	{
		// 获取输入
		for (int i = 0; i < n; i++)
		{
			scanf("%s%d", &str, &t);
			if (!name.count(str))
			{
				name.insert(str);
				res.insert(pair<string, int>(str, t));
				mark.insert(pair<string, int>(str, i + 1));
			}
			else
			{
				// 如果这个获取时间晚，则删除重复的数据
				if (t > res[str])
				{
					mark[str] = i + 1;
					res[str] = t;
				}
					
			}

		}

		vector<PAIR> res_vec(res.begin(), res.end());
		sort(res_vec.begin(), res_vec.end(), CmpByValue());


		for (auto it = res_vec.begin(); it != res_vec.end(); it++)
		{
			cout << mark[it->first] << endl;
		}

	}
	return 0;
}
*/
