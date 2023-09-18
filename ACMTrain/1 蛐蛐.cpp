/*
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <map>
using namespace std;

const int maxm = 10010;
int cnt = 0, n, in[maxm];
map<string, int> Cache;

int ID(string s) {
	if (!Cache[s])
		Cache[s] = ++cnt;
	return Cache[s];

}

int main()
{
	while (scanf("%d", &n) && n != -1) {
		Cache.clear(), cnt = 0;
		memset(in, 0, sizeof(in));

		for (int i = 0; i < n; i++) {
			string t1, t2;
			cin >> t1 >> t2;
			int n1, n2;
			n1 = ID(t1), n2 = ID(t2);
			in[n2]++;
		}

		int num = 0;
		for (int i = 1; i <= cnt; i++) {
			if (!in[i])
				num++;
		}

		if (num == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}
*/