// 9: ͳ�Ƶ��� - ������

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

// ������s���С���׼����
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

		if (str[0] == '\n')	// ����ǻس����˳�
			break;

		//string r = repr(str);

		letter.push_back(str);

		if (!cnt.count(str))
			cnt[str] = 0;

		cnt[str]++;
	}
		
	// ����
	sort(letter.begin(), letter.end());

	// ���
	for (int i = 0; i < letter.size(); i++)
	{
		cout << letter[i] << " " << cnt[letter[i]] << "\n";

		// �����ظ�
		if (cnt[letter[i]] > 1)
			i += cnt[letter[i]] - 1;
	}

	return 0;
}
*/