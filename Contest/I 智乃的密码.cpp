// I	ÖÇÄËµÄÃÜÂë

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
# include <set>
using namespace std;

# define rep(i,a,n) for(int i=a;i<n;i++)
# define pep(i,a,n) for(int i=n-1;i>=a;i--)

vector<int>pos_a;
vector<int>pos_A;
vector<int>pos_num;
vector<int>pos_other;

int main()
{
	int n, l, r;
	int cnt_a = 0, cnt_A = 0, cnt_num = 0, cnt_other = 0;
	string s;

	scanf("%d%d%d", &n, &l, &r);
	cin >> s;

	rep(i, 0, n)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			cnt_a++;
			pos_a.push_back(i);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			cnt_A++;
			pos_A.push_back(i);
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			cnt_num++;
			pos_num.push_back(i);
		}
		else
		{
			cnt_other++;
			pos_other.push_back(i);
		}
	}

	int base = min(min(cnt_a, cnt_A), min(cnt_num, cnt_other));

	return 0;
}
*/