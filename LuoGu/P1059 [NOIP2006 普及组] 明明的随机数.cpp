// P1059 [NOIP2006 普及组] 明明的随机数

/*
# include <stdio.h>
# include <iostream>
# include <set>
using namespace std;

int main()
{
	int n;
	int temp;

	set<int>list;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);

		list.insert(temp);	
	}

	printf("%d\n", list.size());

	for (auto i = list.begin(); i != list.end(); i++)
	{
		if (i == list.end())
			cout << *i  ;
		else
			cout << *i << " ";
	}

	return 0;
}
*/