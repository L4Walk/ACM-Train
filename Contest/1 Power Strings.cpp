/*
// 1: Power Strings

# include <cstdio>
# include <iostream>
# include <algorithm>
# include <string>
using namespace std;

int main()
{
	string str;
	string ch;
	int len;
	int len1;
	int i, j, x;
	int cnt;
	int temp,temp2;
	int max;

	freopen("1 Power Strings.in", "r", stdin);

	while (cin >> str && str != ".")
	{
		len = str.size();
		len1 = len / 2;
		cnt = max = 1;

		while (len1!=0)
		{
			for (x = 0; x < len - len1&&((len-len1+1)/len1)>max; x++)
			{
				cnt = max = 1;
				temp = temp2 = 0;

				for (i = x; i < x+len1; i++)
				{
					temp += str[i] - 'a' + 1;
				}

				for (i =x + len1; i < len&&i+len1<len; i += len1)
				{
					temp2 = 0;
					for (j = i; j < i + len1; j++)
					{
						temp2 += str[j] - 'a' + 1;
					}

					if (temp2 == temp)
						cnt++;
				}

				if (cnt > max)
				{
					max = cnt;
					break;
				}
			}

			len1--;
		}

		printf("%d\n", max);
	}

	return 0;
}

*/