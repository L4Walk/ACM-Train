// A - ªÓ∂Ø∞≤≈≈

/*
# include <iostream>
# include <algorithm>
using namespace std;


struct Act {
	int start;
	int end;
}act[100010];

bool cmp(Act a, Act b)
{
	return a.end < b.end;
}


int main()
{
	int n;
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
			scanf("%d%d", &act[i].start, &act[i].end);

		sort(act, act + n, cmp);

		int num = 1, i = 0;
		for (j = 1; j < n; j++)
			if (act[j].start >= act[i].end) {
				i = j;
				num++;
			}
		
		printf("%d\n", num);
	}

	return 0;
}
*/