// D	[NOIP1998]Æ´Êý

/*
# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
using namespace std;
# define rep(i,a,n) for(int i=a;i<n;i++)
vector<string>nums;

bool cmp(string a, string b)
{
	return a + b > b + a;
}

int main()
{
	int n;
	string s;

	scanf("%d", &n);

	rep(i, 0, n)
	{
		cin >> s;
		nums.push_back(s);
	}

	sort(nums.begin(), nums.end(),cmp);

	rep(i, 0, n)
		cout << nums[i];

	return 0;
}
*/