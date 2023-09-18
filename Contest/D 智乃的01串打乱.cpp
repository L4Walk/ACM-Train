// D	ÖÇÄËµÄ01´®´òÂÒ

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

int main()
{
	int n;
	string s;
	int i, j;
	scanf("%d", &n);

	cin >> s;

	for (i = 0, j = n - 1; i < n; i++)
	{
		if (s[i] != s[j])
			break;
	}

	char t = s[i]; s[i] = s[j]; s[j] = t;

	cout << s << endl;

	return 0;
}
*/