// 9: 统计单词 - 升级版

/*
# include <stdio.h>
# include <string.h>
# include <iostream>
# include <map>
# include <vector>
# include <string>
# include <cctype>
# include <algorithm>
using namespace std;

map<string, int>cnt;
vector<string>letter;

// 将单词s进行“标准化”
/*
string repr(const string& s)
{
	string ans = s;

	for (int i = 0; i < ans.length(); i++)
	{
		ans[i] = tolower(ans[i]);
	}

	return ans;
}*/
/*
int main()
{
	freopen("test2.in", "r", stdin);
	int n = 0;
	string str;

	while (cin>>str)
	{

		if (str[0] == '\n')	// 如果是回车则退出
			break;

		//string r = repr(str);

		letter.push_back(str);

		if (!cnt.count(str))
			cnt[str] = 0;

		cnt[str]++;
	}
		
	// 排序
	sort(letter.begin(), letter.end());

	// 输出
	for (int i = 0; i < letter.size(); i++)
	{
		cout << letter[i] << " " << cnt[letter[i]] << "\n";

		// 跳过重复
		if (cnt[letter[i]] > 1)
			i += cnt[letter[i]] - 1;
	}

	return 0;
}
*/