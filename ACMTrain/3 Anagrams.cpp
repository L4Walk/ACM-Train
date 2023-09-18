// 3: Anagrams

/*
#include <iostream>
#include <cstdio>
#include <set>
#include <sstream>
#include <string>
#include <typeinfo>
#include <algorithm>
#include <vector>
#include <map>
#include <cctype> 
using namespace std;

map<string, int> cnt;
vector<string> words;
vector<string> ans;

//将单词s标准化
string repr(const string s) {
	string anss = s;
	for (int i = 0; i < anss.length(); i++)
		anss[i] = tolower(anss[i]);
	sort(anss.begin(), anss.end());
	return anss;
}

int main()
{
	string s;
	string r;

	while (cin >> s) 
	{
		if (s[0] == '#')
			break;
		
		words.push_back(s);
		r = repr(s);
		
		if (!cnt.count(r))
			cnt[r] = 0;

		cnt[r]++;
	}


	for (int i = 0; i < words.size(); i++)
		if (cnt[repr(words[i])] == 1)
			ans.push_back(words[i]);

	sort(ans.begin(), ans.end());

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;

	return 0;
}
*/