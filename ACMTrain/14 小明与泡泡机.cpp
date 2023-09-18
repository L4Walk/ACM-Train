// 14: 小明与泡泡机

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <stack>
using namespace std;

stack<char>s;

int main()
{
	char bulble[110];	// 创建泡泡数组
	char bulbleNew[110];
	char c, c1;
	int i;
	int num;

	while (scanf("%s", &bulble) != EOF)
	{
		for (i = 0; i < strlen(bulble); i++)
		{
			s.push(bulble[i]);

			while (s.size() > 1)
			{
				c = s.top();
				s.pop();

				c1 = s.top();
				s.pop();

				if (c == c1 && c == 'o')
					s.push('O');
				else if (c == c1 && c == 'O')
					continue;
				else if (c != c1)
				{
					s.push(c1);
					s.push(c);
					break;
				}
			}
		}
		num = 0;
		while (!s.empty())
		{
			bulbleNew[num++] = s.top();
			s.pop();
		}

		if (num == 0)
			printf("NULL");
		else
		{
			for (i = num - 1; i >= 0; i--)
				printf("%c", bulbleNew[i]);
		}

		printf("\n");

	}

	return 0;
}
*/