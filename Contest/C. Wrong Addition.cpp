// C. Wrong Additions

/*
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

# define MAXLEN 1000000000000000000

//vector<int>a;
//vector<int>b;
vector<int>b;
//vector<int>::iterator ita;
//vector<int>::iterator itb;
vector<int>::iterator itb;

int main()
{
	string s, a;
	//char s[MAXLEN], a[MAXLEN], b[MAXLEN];
	int T;
	long long len1, len2, len3;
	long long i, j, z;
	int ia, ib, is;
	char ca, cb, cs;
	scanf("%d", &T);

	while (T--)
	{
		cin >> a >> s;

		len1 = a.size();
		len2 = s.size();
		b.clear();

		if (len1 == 1&& len2 == 2)
		{
			
			ia = a[0] - '0';
			is = (s[0] - '0') * 10 + s[1] - '0';
			ib = is - ia;

			if (ib <= 10)
				printf("%d\n",ib);
			else
				printf("-1\n");

		}
		else
		{
			for (i = len2 - 1, j = len1 - 1, z = 0; i >= 0 && j >= 0; i--, j--, z++)
			{
				if ((s[i] - a[j]) < 0)
				{
					//is = (s[i - 1] - '0') * 10 + s[i] - '0';
					is = 10 + s[i] - '0';
					ia = a[j] - '0';
					ib = is - ia;
					b.push_back(ib);
					i--;
					s[i] = s[i] - 1;
				}
				else
				{
					is = s[i] - '0';
					ia = a[j] - '0';
					ib = is - ia;
					b.push_back(ib);
				}

			}

			if (j >= 0 || i >= 0)
				printf("-1\n");
			else
			{
				len3 = b.size();

				if (b[len3 - 1] == 0)
					len3--;

				for (i = len3 - 1; i >= 0; i--)
					cout << b[i];

				printf("\n");
			}
			
		}
			

	

	}

	return 0;
}
*/