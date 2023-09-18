// K	Ð¡É³µÄ²½·¥

/*
# include <cstdio>
# include <cmath>
# include <cstring>
# include <iostream>
# include <algorithm>
# include <vector>
# include <set>
using namespace std;

int a[10] = { 0 };

int main()
{
	char t;

	while (scanf("%c", &t) != EOF&&t>='0'&&t<='9')
	{

		if (t != '5')
		{
			a[t-'0']++;
			a[5]++;
		}
	}

	for (int i = 1; i <= 9; i++)
		printf("%d ", a[i]);

	return 0;
}
*/