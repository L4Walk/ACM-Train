// B	×°½ø¶Ç×Ó

/*
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

vector<int>morning;
vector<int>night;
vector<int>::iterator iter;

int main()
{
	int n, k;
	int i, j;
	int temp;
	int max = 0;

	cin >> n >> k;

	for (i = 0; i < n; i++)
	{
		cin >> temp;
		morning.push_back(temp);
	}
	
	for (i = 0; i < n; i++)
	{
		cin >> temp;
		night.push_back(temp);
	}

	//sort(morning.rbegin(), morning.rend());
	//sort(night.rbegin(), night.rend());

	for (i = 0; i < n; i++)
	{
		if(i<k)
			max += morning[i];
		else
			max += night[i];
	}

	cout << max;


	return 0;
}
*/