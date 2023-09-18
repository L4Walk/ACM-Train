// B - Text Reverse

/*
# include<stdio.h>
# include <iostream>
# include <vector>
# include <queue>
# include <stack>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n); // 获取行数
	getchar();

	while (n--)
	{
		stack<char>s; // 构建栈

		while (true)
		{
			char ch;
			ch = getchar();

			if (ch == ' ' || ch == '\n' || ch == EOF)
			{
				while (!s.empty())
				{
					// 栈不为空
					printf("%c", s.top());
					s.pop();
				}

				if (ch == '\n' || ch == EOF)
					break;

				printf(" ");
			}
			else
				s.push(ch);
			
		}
		printf("\n");
	}

	return 0;
}
*/