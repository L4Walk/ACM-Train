// A - Square String?

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
	int T;
	int i, j;
	int len;
	char str[110];
	string s;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%s", &str);

		len = strlen(str);

		if (len % 2 != 0)
			printf("NO\n");
		else
		{
			for (i = 0, j = len / 2; i < len / 2 && j < len && str[i] == str[j]; i++, j++);

			if (i == len / 2 && j == len)
				printf("YES\n");
			else
				printf("NO\n");
		}

	}

	return 0;
}
*/