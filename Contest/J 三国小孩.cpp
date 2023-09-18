// J	Èý¹úÐ¡º¢

# include <iostream>
using namespace std;

int main()
{
	int n, m, k;

	while (scanf("%d%d%d", &n, &m, &k) != EOF)
	{
		if (k - n > m)
			printf("NO\n");
		else
			printf("YES\n");

	}

	return 0;
}