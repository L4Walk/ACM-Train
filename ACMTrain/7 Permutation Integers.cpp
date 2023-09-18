// 7: Permutation Integers

/*
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

vector<int>num;

int main()
{
	int n;
	int t;

	while (scanf("%d", &n) != EOF)
	{
		num.clear();
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &t);
			num.push_back(t);
		}

		sort(num.begin(), num.end());

		do
		{
			cout << num[0];

			for (int i = 1; i < n; i++)
				cout << " " << num[i];

			cout << endl;
		} while (next_permutation(num.begin(), num.end()));

	}

	return 0;
}
*/