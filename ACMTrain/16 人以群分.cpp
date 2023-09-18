//16: 人以群分

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

# define N 100010

vector<int>act;

int main()
{
	int n;
	int t;
	int i, j;
	int cntO, cntI;
	int sumO, sumI, sum;
	int diff;

	while (scanf("%d",&n) != EOF)
	{
		sum = sumO = sumI = cntO = cntI = diff = 0;
		act.clear();

		for (i = 0; i < n; i++)
		{
			scanf("%d", &t);
			act.push_back(t);
			sum += t;
		}

		sort(act.begin(), act.end());

		cntI = n / 2;
		cntO = n - cntI;

		for (i = 0; i < cntI; i++)
			sumI += act[i];

		sumO = sum - sumI;

		diff = abs(sumI - sumO);

		printf("Outgoing #: %d\n", cntO);
		printf("Introverted #: %d\n", cntI);
		printf("Diff = %d\n", diff);
	}

	return 0;
}
*/