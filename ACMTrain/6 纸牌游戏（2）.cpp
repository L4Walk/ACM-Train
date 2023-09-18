// 6: ÷Ω≈∆”Œœ∑£®2£©

/*
# include <iostream>
# include <queue>
using namespace std;

queue<string>card;

int main()
{
	int n;
	string t;

	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			card.push(t);
		}

		while (!card.empty())
		{

			cout << card.front() ;
			card.pop();
			if (!card.empty())
			{
				cout <<  " ";
				card.push(card.front());
				card.pop();
			}
		}

		cout << endl;
	}

	return 0;
}
*/