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
	scanf("%d", &n); // ��ȡ����
	getchar();

	while (n--)
	{
		stack<char>s; // ����ջ

		while (true)
		{
			char ch;
			ch = getchar();

			if (ch == ' ' || ch == '\n' || ch == EOF)
			{
				while (!s.empty())
				{
					// ջ��Ϊ��
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