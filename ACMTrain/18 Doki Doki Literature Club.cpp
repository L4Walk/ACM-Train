// 18: Doki Doki Literature Club

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <string>
using namespace std;

#define N 10010

struct Letter {
	string a;
	long long int b;
}letter[N];

bool myCmp(const Letter& letter1, const Letter& letter2)
{
	if (letter1.b == letter2.b)
		return letter1.a < letter2.a;
	else
		return letter1.b > letter2.b;

}
int main()
{
	int T;
	int n, m;
	int i, j;
	long long int sum;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d%d", &n, &m);
		sum = 0;

		for (i = 0; i < n; i++)
			cin >> letter[i].a >> letter[i].b;

		sort(letter, letter + n, myCmp);

		for (i = 1; i <= m; i++)
			sum += (m - i + 1) * (letter[i - 1].b);

		printf("%lld ", sum);

		for (i = 0; i < m - 1; i++)
			cout << letter[i].a << " ";

		cout << letter[m - 1].a << endl;
	}

	return 0;
}
*/