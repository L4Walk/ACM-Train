// C - 产生冠军

/* 总人数-输者 == 1 即代表有一个冠军 */

/*
# include <stdio.h>
# include <iostream>
# include <string>
# include <set>
# include <sstream>
using namespace std;

set<string>playerNum;	// 总人数集合
set<string>loser;	// 败者集合

int main()
{
	int num;	// 参赛选手人数
	string player1, player2;	// 两位选手，且前者获胜

	while (scanf("%d", &num) != EOF && num != 0)
	{
		// 重置集合
		playerNum.clear();
		loser.clear();

		for (int i = 0; i < num; i++)
		{
			cin >> player1 >> player2;

			playerNum.insert(player1);
			playerNum.insert(player2);

			loser.insert(player2);
		}

		if (playerNum.size() - loser.size() == 1)
			printf("Yes\n");
		else
			printf("No\n");

	}

	return 0;
}
*/