/*
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <map>
using namespace std;

const int maxm = 10010;

string str;
string m[maxm]; int cnt_m;
string p[maxm]; int cnt_p;
string s[maxm]; int cnt_s;
string other[maxm]; int cnt_other;


void classify(string str)
{
	if (str[0] >= '0' && str[0] <= '9') {	// 数字
		if (str[1] == 'm') {
			m[cnt_m++] = str;
		}
		else if (str[1] == 'p') {
			p[cnt_p++] = str;
		}
		else if (str[1] == 's') {
			s[cnt_s++] = str;
		}
	}
	else if (str[0] != ' ') {
		 other[cnt_other++] = str;
	}
}

int main()
{
	int i, j;
	int cnt;
	int f = 1;
	int dong, nai, xi, bei, bai, fa, zhong = 0;

	while (cin >> str) {
		cnt_m = 0;
		cnt_p = 0;
		cnt_s = 0;
		cnt_other = 0;
		dong = nai = xi= bei= bai= fa= zhong = 0;
		f = 1;
		cnt = 13;
		classify(str);
		while (cnt--) {
			// 数据输入
			cin >> str;
			classify(str);
		}

		sort(m, m + cnt_m);
		sort(p, p + cnt_p);
		sort(s, s + cnt_s);

		for (i = 0; i < cnt_other; i++) {
			if (other[i].compare( "dong") == 0)
				dong++;
			else if (other[i].compare("nan") == 0)
				nai++;
			else if (other[i].compare("xi") == 0)
				xi++;
			else if (other[i].compare("bei") == 0)
				bei++;
			else if (other[i].compare("bai") == 0)
				bai++;
			else if (other[i].compare("fa") == 0)
				fa++;
			else if (other[i].compare("zhong") == 0)
				zhong++;
		}

		// 万筒条
		for (i = 0; i < cnt_m; i++) {
			if (f) {
				cout << m[i];
				f = 0;
			}
			else
				cout << " " << m[i];
		}
		for (i = 0; i < cnt_p; i++) {
			if (f) {
				cout << p[i];
				f = 0;
			}
			else
				cout << " " << p[i];
		}
		for (i = 0; i < cnt_s; i++) {
			if (f) {
				cout << s[i];
				f = 0;
			}
			else
				cout << " " << s[i];
		}

		// 东南西北白发中
		for (j = 0; j < dong; j++) {
			if (f) {
				printf("dong");
				f = 0;
			}
			else
				printf(" dong");
		}

		for (j = 0; j < nai; j++) {
			if (f) {
				printf("nan");
				f = 0;
			}
			else
				printf(" nan");
		}

		for (j = 0; j < xi; j++) {
			if (f) {
				printf("xi");
				f = 0;
			}
			else
				printf(" xi");
		}

		for (j = 0; j < bei; j++) {
			if (f) {
				printf("bei");
				f = 0;
			}
			else
				printf(" bei");
		}

		for (j = 0; j < bai; j++) {
			if (f) {
				printf("bai");
				f = 0;
			}
			else
				printf(" bai");
		}

		for (j = 0; j < fa; j++) {
			if (f) {
				printf("fa");
				f = 0;
			}
			else
				printf(" fa");
		}

		for (j = 0; j < zhong; j++) {
			if (f) {
				printf("zhong");
				f = 0;
			}
			else
				printf(" zhong");
		}

		printf("\n");
	}

	return 0;
}
*/