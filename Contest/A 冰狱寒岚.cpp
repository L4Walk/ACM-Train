// A	±ùÓüº®á°

/*
# include <cstdio>
# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
	int n;
	int i, j;
	long temp;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &temp);

		if (!(temp >= -1024 && temp < 1024))
		{
			temp %= 2048;

			if (!(temp >= -1024 && temp < 1024))
				temp -= 2048;
		}

		if (i == 0)
			printf("%ld", temp);
		else
			printf(" %ld", temp);
	}
	

	return 0;
}
*/