// C - �����ھ�

/* ������-���� == 1 ��������һ���ھ� */

/*
# include <stdio.h>
# include <iostream>
# include <string>
# include <set>
# include <sstream>
using namespace std;

set<string>playerNum;	// ����������
set<string>loser;	// ���߼���

int main()
{
	int num;	// ����ѡ������
	string player1, player2;	// ��λѡ�֣���ǰ�߻�ʤ

	while (scanf("%d", &num) != EOF && num != 0)
	{
		// ���ü���
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